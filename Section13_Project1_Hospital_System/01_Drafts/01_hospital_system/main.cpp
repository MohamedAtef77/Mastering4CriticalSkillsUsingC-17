/*
============================================================
 Task Title    : Factorial using recursion 
 Module        : Section 13 – Project #1 - Hospital System
 Author        : <Add author name>
 Created On    : <Add creation date>
 Draft Version : v0.1
============================================================
 Overview
 --------
 Briefly describe the purpose of this draft and the scenario
 it demonstrates.

 Key Notes
 ---------
 - Summarize any assumptions or prerequisites.
 - List the primary printing techniques showcased.
 - Mention any edge cases to be reviewed.

 Testing Checklist
 -----------------
[ ] Compile successfully with `g++ 01_print_strings.cpp -std=c++17`.
[ ] Verify console output matches expectations.
[ ] Document any deviations or follow-up actions.
------------------------------------------------------------
*/

/*============================================================
 File Inclusions
============================================================*/
#include <iostream>
#include <climits>
#include <string>

/*============================================================
 Used Namespaces
============================================================*/
using namespace std;
/*============================================================
 Type Definitions
============================================================*/

/*============================================================
 Local & Global Macros
============================================================*/

/*============================================================
 Function-like Macros
============================================================*/

/*============================================================
 Static Function Declarations
============================================================*/

/*============================================================
 Global Function Declarations
============================================================*/

/*============================================================
 Static Function Definitions
============================================================*/

/*============================================================
 Global Function Definitions
============================================================*/
/*============================================================
 File Inclusions
============================================================*/
#define NO_OF_SPECS             20
#define MAX_NO_OF_PAT           5


string pat_names[NO_OF_SPECS][MAX_NO_OF_PAT];
bool pat_urgencies[NO_OF_SPECS][MAX_NO_OF_PAT];
int pat_counts[NO_OF_SPECS] = {0};


void insert_patient_at_last_index(const string &name,const int &spec, const bool &is_urgent)
{
    /* insert the new patient now */
    pat_names[spec][pat_counts[spec]] = name;
    pat_urgencies[spec][pat_counts[spec]] = is_urgent;

    /* Increment the patients current count immediately */

    ++pat_counts[spec];
}
void insert_patient_at_index(const int &index, const string &name,const int &spec, const bool &is_urgent)
{
    
    /* Increment the patients current count immediately */
    pat_counts[spec]++;

    for (int i = pat_counts[spec] - 1; i > index; --i)
    {
        pat_names[spec][i] = pat_names[spec][i -1];
        pat_urgencies[spec][i] = pat_urgencies[spec][i -1];
    }

    /* insert the new patient now */
    pat_names[spec][index] = name;
    pat_urgencies[spec][index] = is_urgent;
}

bool add_patient(const string &name,const int &spec, const bool &is_urgent)
{
    int curr_index{0};
    bool retVal{true};
    int i{0};


    /* Check if are there any palces left */
    curr_index = pat_counts[spec];

    if(curr_index >= MAX_NO_OF_PAT)
    {
        retVal = false; /* Indicate to the upper layer that there is no space left */
    }
    else /* The patient can be added */
    {
        /* If there is no urgency just add him at the end*/
        if (is_urgent == false)
        {
            insert_patient_at_last_index(name,spec,is_urgent);
        }
        else 
        {
            /* The patient is urgent, search for the first normal patient and place it infrom of him / her */
            for (i = 0; i < pat_counts[spec] && pat_urgencies[spec][i] == true; ++i);
            
            /* Insert at the index of i */
            insert_patient_at_index(i,name,spec,is_urgent);

        }



    }


    return retVal; 

}

bool get_next_patient(const int &spec, string &name)
{
    bool retVal{true};

    if(pat_counts[spec] == 0) /* This specialization is empty */
    {
        retVal = false;
    }
    else 
    {
        /* Get the patients name before removing it */
        name = pat_names[spec][0];


        for(int i = 1; i < pat_counts[spec]; ++i)
        {
            pat_names[spec][i-1] = pat_names[spec][i];
            pat_urgencies[spec][i - 1] = pat_urgencies[spec][i];
        }
        /* Increment the patients current count immediately */
        --pat_counts[spec];
    }

    return retVal;
}

bool display_patients(int &spec)
{
    bool retVal{true};

    int count{pat_counts[spec]};

    if(count == 0)
    {
        retVal = false;
    }
    else 
    {
        cout << "There are " << count << " patients in specialization " << spec << '\n';

        for (int i = 0; i < count; ++i)
        {
            cout << pat_names[spec][i] << ' ' << (pat_urgencies[spec][i] ? "urgent" : "regular") << '\n';
        }
    }

    return retVal;
}
void hospital_program(void)
{
    int choice{0};

    while(true)
    {
        cout << "Enter your choice:\n";
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) Exit\n";

        cin >> choice;

        if(choice == 1)
        {
            int spec{0};
            string name{};
            int status{0};

            cout << "Enter specialization, name, statis: ";
            cin >> spec >> name >> status;

            bool added = add_patient(name, spec, status == 1);
            if(!added)
            {
                cout << "Sorry we can't add more patients for this specialization\n";
            }
        }
        else if(choice == 2)
        {
            cout << "****************************\n";
            for(int spec = 0; spec < NO_OF_SPECS; ++spec)
            {
                int curr_spec = spec;
                if(pat_counts[curr_spec] == 0)
                {
                    continue;
                }

                display_patients(curr_spec);
            }
        }
        else if(choice == 3)
        {
            int spec{0};
            string name{};

            cout << "Enter specialization: ";
            cin >> spec;

            bool ret = get_next_patient(spec, name);

            if(ret == false)
            {
                cout << "No patients at the moment. Have rest, Dr\n";
            }
            else 
            {
                cout << name << " please go with the Dr\n";
            }
        }
        else if(choice == 4)
        {
            break;
        }
    }
}
int main(int argc, char const *argv[])
{
    hospital_program();
    return 0;
}
