/*
============================================================
 Draft Title   : last three digits 
 Module        : Section 06 – Selection
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
    int num{0};
    int result{0};
    int ldigit1{0},ldigit2{0},ldigit3{0};
    int ldigits_sum{0};


    cout << "Enter an integer: ";
    cin >> num;

    if(num < 10000)
    {
        cout << "This is a small number." << endl;
    }
    else 
    {
        ldigit1 = num % 10; 
        ldigit2 = (num / 10) % 10;
        ldigit3 = (num / 100) % 10; 
        ldigits_sum = ldigit1 + ldigit2 + ldigit3;

        if(ldigits_sum % 2) /* The sum of the last three digits is odd */
        {
            cout << "This is a great number." << endl;
        }
        else /* It is even */ 
        {
            if((ldigit1 % 2) || ( ldigit2 % 2) || (ldigit3 % 2))
            {
                cout << "This is a good number." << endl;
            }
            else
            {
                cout << "This is a bad number." << endl;
            }
        }

    }

}