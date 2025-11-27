/*
============================================================
 Draft Title   : Find the maximum value in a 2D array 
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
#include <string> // Required for std::string

using namespace std;

int main(void)
{
    int arr[100][100]{{}};
    int ROWS{0}, COLS{0},max{0};
    int max_indices[2]{};
    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j];

        }
    }

    max = arr[0][0];

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                max_indices[0] = i;
                max_indices[1] = j;
            }
        }
    }

    cout << "The maximum value is: " << max << " and it is at (" << max_indices[0] << "," << max_indices[1] << endl;
}