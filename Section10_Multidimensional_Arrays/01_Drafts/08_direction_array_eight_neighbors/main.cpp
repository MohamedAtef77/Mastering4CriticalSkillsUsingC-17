/*
============================================================
 Draft Title   : Direction Array 
 Module        : Section 10 – Multidimensional Arrays
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
int main()
{
    /*           down,    down-right,      right,     up-right,     up,           up-left,    left,          down-left */
    int di[8] = {1,       1,               0,         -1,           -1,           -1,         0,             1           };
    int dj[8] = {0,       1,               1,          1,           0,            -1,         -1,            -1          };

    /* Sample Position */
    int i{1};
    int j{1};

    for(int d = 0; d < 4 ; ++d)
    {
        cout << (i + di[d]) << " " << (j + dj[d]) << endl;
    }
    
}
