/*
============================================================
 Draft Title   : Swapping two columns
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
    int col1{0}, col2{0}, temp{0};

    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j]; /* I don't even need to store an array */
        }
    }

    cout << "Enter the index of the first column (starting from zero): ";
    cin >> col1;

    cout << "Enter the index of the second column (starting from zero): ";
    cin >> col2;

    /* Perfrom the swapping */
    for (int i = 0; i < ROWS; i++)
    {
        temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
    }

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}