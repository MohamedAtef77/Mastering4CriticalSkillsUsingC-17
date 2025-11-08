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
    int a{0};
    int b{1};

    cout << a++ << endl; /* The printed value will be 0, a is now 1 */
    cout << ++a << endl; /* The printed value will be 2, a is now 2 */

    a += 2*b + 1 ; /* a = 5 */

    b = ++a * 2; /* a = 6, b = 12 */

    cout << a << " " << b << endl; /* 6 12 */

    b = a ; /* b = 6 */
    a = 12 + a / 3 / 2 - 2 * 2 ;  /* a = 12 + 1 - 4  = 9 */

    cout << a << endl; /* 9 */
    
    a = b; /* a = 6 */

    a = ((12 + a) /3 /2 -2) * 2 ; /* a = 2 */
    cout << a << endl; /* 2 */


}   