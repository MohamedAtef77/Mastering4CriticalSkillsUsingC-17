/*
============================================================
 Draft Title   : Special Sums Using For Loops
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
int main(void)
{
    int no_of_tcs{0};
    int no_of_entries{0};
    int result{0};
    int sum{0};
    int temp{0};
    int i{0},j{0},k{0};


    cout << "Enter the number of the TCs: ";
    cin >> no_of_tcs;

    for(i = 0; i < no_of_tcs; i++)
    {
        cout << "Enter the number of entries: ";
        cin >> no_of_entries;
        
        cout << "Enter your numbers separated by a space: ";
     
        sum = 0;
        for(j = 0; j < no_of_entries; j++)
        {
            cin >> temp;
            result = 1;
            for(k = 0; k <= j; k++)
            {
                result *= temp;
            }
            sum += result;

        }

        cout << "The result is: " << sum << endl;
    }


}