/*
============================================================
 Draft Title   : is even
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
    cout << "Enter an integer: ";
    cin >> num;

    if((num%2)) /* The number is odd */
    {
        if(num >= 1000000)
        {
            result = -num;
        }
        else if(num >= 1000) /* When num == 1000 there is no specified behavior so this step is imorovised */
        {
            result = num % 10000;
        }
        else 
        {
            result = num % 100;
        }
    }
    else /* The number is even */
    {
        result = num % 10;
    }

    cout << "The result is: " << result << endl;

}