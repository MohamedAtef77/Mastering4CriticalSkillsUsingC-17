/*
============================================================
 Task Title    : get the length  3n + 1 Sequence
 Module        : Section 12 – Recursive Functions
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
/*============================================================
 File Inclusions
============================================================*/
int sequence(int n, int call_times = 0)
{
    
    if (n <= 1)
    {
       
        return ++call_times;
    }
    else if (!(n % 2)) /* Even */
    {
        return sequence(n / 2, ++call_times);
    }
    else
    {
        return sequence(3 * n + 1,++call_times);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    cout << sequence(5) << endl;
    cout << sequence(6) << endl;
    cout << sequence(7) << endl;

    return 0;
}
