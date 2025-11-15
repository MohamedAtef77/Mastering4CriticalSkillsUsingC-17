
/*
============================================================
 Task Title    : print_diamond
 Module        : Section 07 – Loops
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
int main()
{
    int num{5};
    int total_rows = 2 * num - 1; /* total rows in the diamond */
    int spaces = num - 1;         /* leading spaces before stars on current row */
    int stars = 1;                /* number of stars on current row */
    int row = 0;

    while (row < total_rows)
    {
        /* print the leading spaces */
        int col = 0;
        while (col < spaces)
        {
            cout << ' ';
            ++col;
        }

        /* print the stars */
        col = 0;
        while (col < stars)
        {
            cout << '*';
            ++col;
        }

        cout << '\n';

        /* adjust counts for next row (top half expands, bottom half contracts) */
        if (row < num - 1)
        {
            --spaces;
            stars += 2;
        }
        else
        {
            ++spaces;
            stars -= 2;
        }

        ++row;
    }
}
