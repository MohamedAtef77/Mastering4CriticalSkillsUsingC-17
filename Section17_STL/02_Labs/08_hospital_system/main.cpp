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
#include <queue>

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

struct Patient {
    string name;
    bool is_urgent;
    int order;

    // Priority Queue is a max-heap. We define operator< to determine priority.
    bool operator<(const Patient& other) const {
        if (is_urgent != other.is_urgent)
            return is_urgent < other.is_urgent; // Urgent (true/1) > Regular (false/0)
        return order > other.order; // Smaller order (earlier arrival) has higher priority
    }
};

priority_queue<Patient> queues[NO_OF_SPECS + 1];
int order_counters[NO_OF_SPECS + 1] = {0};

bool add_patient(const string &name,const int &spec, const bool &is_urgent)
{
    if (queues[spec].size() >= MAX_NO_OF_PAT)
        return false;

    queues[spec].push({name, is_urgent, ++order_counters[spec]});
    return true;
}

bool get_next_patient(const int &spec, string &name)
{
    if (queues[spec].empty())
        return false;

    Patient p = queues[spec].top();
    name = p.name;
    queues[spec].pop();
    return true;
}

bool display_patients(int &spec)
{
    bool retVal{true};

    if(queues[spec].empty())
    {
        retVal = false;
    }
    else 
    {
        cout << "There are " << queues[spec].size() << " patients in specialization " << spec << '\n';

        priority_queue<Patient> temp = queues[spec];
        while (!temp.empty()) {
            Patient p = temp.top();
            temp.pop();
            cout << p.name << ' ' << (p.is_urgent ? "urgent" : "regular") << '\n';
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
            for(int spec = 0; spec <= NO_OF_SPECS; ++spec)
            {
                int curr_spec = spec;
                if(queues[curr_spec].empty())
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
