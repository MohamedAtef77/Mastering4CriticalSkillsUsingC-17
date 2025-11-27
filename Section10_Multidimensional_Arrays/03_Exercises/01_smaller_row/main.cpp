/*
============================================================
 Task Title    : Smaller Row
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
    int ROWS{0}, COLS{0}, max{0};
    int no_of_queries{0};
    int first_row_index{0};
    int second_row_index{0};
    int j{0};

    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the number of queries: ";
    cin >> no_of_queries;
    for (int q = 0; q < no_of_queries; ++q)
    {
        cout << "Enter the index of the first row: (1 based index)";
        cin >> first_row_index;

        cout << "Enter the index of the second row: (1 based index)";
        cin >> second_row_index;

        for (j = 0; j < COLS; ++j)
        {
            if (arr[first_row_index - 1][j] > arr[second_row_index - 1][j])
            {
                break;
            }
        }

        if (j != COLS)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}