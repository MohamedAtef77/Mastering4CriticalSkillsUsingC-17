/*
============================================================
 Draft Title   : Column Row Order
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
int main(void)
{
    double grades[7][6] = {0};

    for (int row = 0; row < 7; ++row)
        for (int col = 0; col < 4; ++col)
            cin >> grades[row][col];

    for (int col = 0; col < 4; ++col)
    {
        cout << "Col " << col << ": ";
        for (int row = 0; row < 7; ++row)
        {
            cout << grades[row][col] << " ";
        }
        cout << "\n";
    }
}