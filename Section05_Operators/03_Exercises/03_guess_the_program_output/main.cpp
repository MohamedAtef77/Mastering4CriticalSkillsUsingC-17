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
    int a = 210;

    a /= 2;
    cout << a << "\n"; /* 105 */

    cout << (a /= 3) << "\n"; /* 35 */
    cout << (a /= 5) << "\n"; /* 7 */
    cout << (a /= 7) << "\n"; /* 1 */

    cout << (24.3 * (5 - 3.)) / 5 / 8 << "\n"; /* 1.215 */

    a = 10;
    cout << a++ + 10 << "\n"; /* 20 */
    cout << a++ + 10 << "\n"; /* 21  */
    cout << a-- + 10 << "\n"; /* 22 */
    cout << a-- + 10 << "\n"; /* 21 */

    int b = 20;
    cout << ++b << ++b << "\n"; // Don't code this way /*2122 */

    cout << a << "\n"; /* 10 */
    ++a + 10; // Don't code this way
    cout << a << "\n"; /* 11 */
}   