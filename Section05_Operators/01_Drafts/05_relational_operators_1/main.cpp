/*
============================================================
 Draft Title   : Logical Operators
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
    cout << (3 > 5) << endl; /* 0 */
    cout << (3 < 5) << endl; /* 1 */
    cout << (3 == 5) << endl; /* 0 */
    cout << (3 >= 5) << endl; /* 0 */
    cout << (3==3) << endl; /* 1 */
    cout << (3 > 1) << endl; /* 1 */
    cout << (3 != 4) << endl; /* 1 */
    cout << (3 != 3) << endl; /* 0 */



}