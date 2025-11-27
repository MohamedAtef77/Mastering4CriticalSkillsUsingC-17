/*
============================================================
 Draft Title   : Lets put the values 
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
    double grades[7][6];

    /* Mostafa Grades */
    grades[0][0] = 50, grades[0][1] = 33, grades[0][2] = 40, grades[0][3] = 30;

    /* Asmaa Grades */
    grades[1][0] = 35, grades[1][1] = 50, grades[1][2] = 40, grades[1][3] = 30;

    for (int row = 0; row < 7; ++row)
    {
        cout << "Row " << row << ": ";
        for (int col = 0; col < 4; ++col)
        {
            cout << grades[row][col] << " ";
        }
        cout << "\n";
    }
}