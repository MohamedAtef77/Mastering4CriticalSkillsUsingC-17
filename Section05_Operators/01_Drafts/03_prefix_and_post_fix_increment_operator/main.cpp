/*
============================================================
 Draft Title   : Prefix Increment Operator 
 Module        : Section 05 – Operators
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
    int a, b; 

    a = 10; 

    b = ++a; /* a is 11 and b is 11, prefix increment takes effect after the including expression is evaluated*/

    cout << a << " " << b << endl;

    a = 10; 

    b = a++; /* b is 10 and b after the ; will be 11 */
    
    cout << a << " " << b << endl;

    a = 10; 
    cout << a++ << endl; /* The output will be 10 */


    a = 10;
    cout << ++a << endl; /* The output will be 11 */

}