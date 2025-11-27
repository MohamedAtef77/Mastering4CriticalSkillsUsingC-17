/*
============================================================
 Draft Title   : Special Print
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
#include <iostream>
#include <string> /* Required for std::string */

using namespace std;

int main(void)
{
    int arr[100][100]{{}};
    int ROWS{0}, COLS{0},max{0};
    int left_diag_sum{0},right_diag_sum{0},last_row_sum{0},last_col_sum{0};



    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j]; /* I don't even need to store an array */


            /* Detect which subset the scanned element belongs to */

            if(i == j) /* Left Diagnoal */
            {
                left_diag_sum += arr[i][j];
            }
            
            if(i == (COLS - j - 1)) /* Right Diagonal */
            {
                right_diag_sum += arr[i][j];
            }

            if(i == ROWS -1 ) /* Last Row */
            {
                last_row_sum += arr[i][j];
            }

            if(j == COLS -1 )
            {
                last_col_sum += arr[i][j];
            }

        }
    }

    /* --- OUTPUT STATEMENTS START HERE --- */

    /* Line 1: Sum of left diagonal & Sum of right diagonal */
    cout << left_diag_sum << " " << right_diag_sum << endl;

    /* Line 2: Sum of last row & Sum of last column */
    cout << last_row_sum << " " << last_col_sum << endl;
}
