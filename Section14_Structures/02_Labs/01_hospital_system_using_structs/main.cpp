/*
 * ********************************************************************************************************************
 *
 *   *****   *************************   **************   ***********************
 *  ******   *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  **       *************************   **************   ***********************
 *  **       *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  ******   ***                       **************   ***
 *   *****   ***                       **************   ***
 *
 * ********************************************************************************************************************
 *
 *   Copyright (c) 2021-2024, Sci-Fi Robotics Ltd.
 *   All rights reserved.
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the MIT License.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the MIT
 *   License for more details.
 *
 *   You should have received a copy of the MIT License along with
 *   this library; if not, write to info@scifi-robotics.com.
 *
 * ********************************************************************************************************************
 *
 *   AUTHOR: Your Name.
 *
 *   DATE: 12/21/2023
 *
 *   PROJECT: C++ How To Program.
 *
 *   DESCRIPTION:
 *     Hospital System
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <climits>
#include <string>

/**********************************************************************************************************************
 *  USED NAMESPACES
 *********************************************************************************************************************/
using namespace std;

/**********************************************************************************************************************
 *  LOCAL & GLOBAL MACROS
 *********************************************************************************************************************/
#define NO_OF_SPECS             20
#define MAX_NO_OF_PAT           5

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/
struct Patient
{
    /* Data Members */
    string name; 
    bool isUrgent; 


    /* Default Constructor */
    Patient()
    {
        name = "";
        isUrgent = false;
    }

    /* Full Constructor */
    Patient(const string &nm, const bool &urgent)
    {
        name = nm; 
        isUrgent = urgent; 
    }

    /* Setters */
    void setName(const string &nm)
    {
        name = nm;
    }
    void setUrgency(const bool &urg)
    {
        isUrgent = urg;
    }

    /* Getters */
    string getName(void) const
    {
        return name;
    }
    bool getUrgncy(void) const
    {
        return isUrgent;
    }
};

struct PatientQueue
{
    Patient patArr[MAX_NO_OF_PAT]{}; /* Value Initialization */
    int patCount{0};

    PatientQueue() = default;

    bool addNormalPatient(const Patient &pat)
    {
        bool retVal = false;
        if(patCount < MAX_NO_OF_PAT)
        {
            patArr[patCount] = pat;
            ++patCount;
            retVal = true;
        }
        return retVal;
    }

    bool addUrgentPatient(const Patient &pat)
    {   
        bool retVal = false;
        /* Find the index of the last urgent patient and insert it afterwards, this way it is a priority queue*/
        int index{0};

        if (patCount < MAX_NO_OF_PAT)
        {

            for (index = 0; index < patCount && patArr[index].isUrgent == true; ++index)
                ;

            /* Insert the patient at this index */

            /* Increment the patients current count immediately */
            ++patCount;

            for (int i = patCount - 1; i > index; --i)
            {
                patArr[i] = patArr[i - 1];
            }

            /* insert the new patient now */
            patArr[index] = pat;

            retVal =  true;
        }

        return retVal;
    }
    
    bool getNextPatient(Patient &nextPat)
    {
        bool retVal = false;
        if(patCount > 0)
        {
            nextPat = patArr[0];

            for(int i = 1; i < patCount; ++i)
            {
                patArr[i-1] = patArr[i];
            }

            --patCount;
            retVal = true;
        }

        return retVal;
    }

    bool displayPatientsQueue(void)
    {
        bool retVal = true;

        if (patCount == 0)
        {
            retVal = false;
        }
        else
        {

            for (int i = 0; i < patCount; ++i)
            {
                cout << patArr[i].name << ' ' << (patArr[i].isUrgent ? "urgent" : "regular") << '\n';
            }
        }

        return retVal;
    }
};

struct Hospital 
{
    PatientQueue specializations[NO_OF_SPECS]{};
    int entry{0};
    Hospital()
    {
        entry = 0;
    }

    void handleEntries(void)
    {
        int choice{0};

        while(true)
        {
            cout << "\nEnter your choice:\n";
            cout << "1) Add new patient\n";
            cout << "2) Print all patients\n";
            cout << "3) Get next patient\n";
            cout << "4) Exit\n";

            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                int spec{0};
                string name{};
                int status{0};

                cout << "Enter specialization, name, status: ";
                cin >> spec >> name >> status;

                Patient p(name, status == 1);
                bool added = false;
                if (p.isUrgent)
                    added = specializations[spec].addUrgentPatient(p);
                else
                    added = specializations[spec].addNormalPatient(p);

                if(!added)
                {
                    cout << "Sorry we can't add more patients for this specialization\n";
                }
                break;
            }
            case 2:
            {
                cout << "****************************\n";
                for(int spec = 0; spec < NO_OF_SPECS; ++spec)
                {
                    if(specializations[spec].patCount > 0)
                    {
                        cout << "There are " << specializations[spec].patCount << " patients in specialization " << spec << '\n';
                        specializations[spec].displayPatientsQueue();
                    }
                }
                break;
            }
            case 3:
            {
                int spec{0};
                cout << "Enter specialization: ";
                cin >> spec;

                Patient p;
                bool ret = specializations[spec].getNextPatient(p);

                if(ret == false)
                {
                    cout << "No patients at the moment. Have rest, Dr\n";
                }
                else 
                {
                    cout << p.getName() << " please go with the Dr\n";
                }
                break;
            }
            case 4:
                return;
            }
        }
    }
};

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int main()
{
    Hospital hospital;
    hospital.handleEntries();
    return 0;
}
