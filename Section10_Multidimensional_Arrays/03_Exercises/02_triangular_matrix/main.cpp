/*
============================================================
 Task Title    : Transpose Of A Matrix 
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
    int new_arr[100][100];
    int ROWS{0}, COLS{0};
    int upper_part_sum{0};
    int lower_part_sum{0};


    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;


    /* Get the elements of the matrix */
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j]; /* I don't even need to store them */
        }
    }

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = i+1; j < COLS; ++j)
        {
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    /* Swap the dimensions also */
    int temp;
    temp = ROWS;
    ROWS = COLS;
    COLS = temp;


    /* Print the array */
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   
}