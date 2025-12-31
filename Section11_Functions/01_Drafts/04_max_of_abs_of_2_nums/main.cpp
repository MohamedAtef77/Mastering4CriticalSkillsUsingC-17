/*
============================================================
 Draft Title   : Maximum of Absolute Of 2 Numbers 
 Module        : Section 11 – Functions
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
int our_abs(int n)
{
    if(n >= 0)
    {
        return n;
    }


    return -n;
}
int our_max(int a, int b)
{
    int max; 

    a = our_abs(a);
    b = our_abs(b);


    if(a > b)
    {
        max = a; 
    }
    else 
    {
        max = b;
    }

    return max;
}
int main()
{
    cout << our_max(2,5) << endl;
    cout << our_max(2,-5) << endl;

    return 0;
}
