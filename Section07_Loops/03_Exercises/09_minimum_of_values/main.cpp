
/*
============================================================
 Task Title    : Minimum Of The Values 
 Module        : Section 07 – Loops
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
int main()
{
    int no_of_tcs{0};
    int no_of_values{0};
    int min{0};
    int value{0};




    cout << "Enter the number of TCs: ";
    cin >> no_of_tcs;

    while(no_of_tcs > 0)
    {
        cout << "Enter the number of compared values: " ; 
        cin  >> no_of_values;
        cout << "Enter the values, spaced: ";
        cin >> value;
        min = value;


        while((no_of_values -1) > 0)
        {

            cin >> value;
            if(value < min)
            {
                min = value;
            }

            no_of_values--;
        }
        cout << "Min is: " << min << endl;
        no_of_tcs--;
    }
}