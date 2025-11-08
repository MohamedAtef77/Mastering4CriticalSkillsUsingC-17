/*
============================================================
 Task Title    :Guess the program output  
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
int main(void)
{
    int a{10};
    int b{20};
    int c{30};
    int d{40};


    cout << (a + b == c) << endl; /* 1 */
    cout << (a + b + c >= 2 * d) << endl; /* 0 */

    cout << (a > 5 || d <30) << endl; /* 1 */
    cout << (a > 5 && d < 30) << endl; /* 0 */
    cout << (a <= b && b <= c) << endl; /* 1 */

    cout << (a > 5 && d < 30 || c - b == 10) << endl;  /* 1 */
    cout << (a <= b && b <= c &&  c <= d) << endl; /* 1 */

    cout << (a >5 && d < 30 || c > d || d % 2 == 0) << endl; /* 1 */
    cout << (a >5 && d < 30 || c > d && d % 2 == 0) << endl; /* 0 */

    cout << (a == 10 || b != 20 && c != 30 || d != 40) << endl; /* 1 */
    cout << (a == 10 || b != 20 && c != 30 || d != 40) << endl; /* 1 */



}   