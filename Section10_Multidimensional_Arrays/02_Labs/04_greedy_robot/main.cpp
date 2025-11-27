/*
============================================================
 Draft Title   : Greedy Robot
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
#define NO_OF_DIRECTIONS 3
/*============================================================
 Function-like Macros
============================================================*/
/* We haven't studiued it but it looks better this way */
#define IS_MOVE_VALID(new_i, new_j, boundary_i, boundary_j) ((new_i) >= 0 && (new_i) < (boundary_i) && (new_j) >= 0 && (new_j) < (boundary_j))
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
    int ROWS{0}, COLS{0};
    bool is_there_valid_move{true};
    int i{0}, j{0}, max_i{0}, max_j{0};
    int direction_arr_i[NO_OF_DIRECTIONS] = {1, 0, 1};
    int direction_arr_j[NO_OF_DIRECTIONS] = {0, 1, 1};
    int max{INT_MIN};
    int total_sum{0};

    cout << "Enter the number of rows: ";
    cin >> ROWS;

    cout << "Enter the number of columns: ";
    cin >> COLS;

    cout << "Enter the array elements (spaced): ";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j]; /* I don't even need to store an array */
        }
    }

    /* Get the first element */

    total_sum = arr[i][j];
    while (is_there_valid_move == true)
    {
        /* Cehck for valid neighbours, if valid perform the comparison */
        max = INT_MIN;
        for (int counter = 0; counter < NO_OF_DIRECTIONS; ++counter)
        {

            int temp_i = i + direction_arr_i[counter];
            int temp_j = j + direction_arr_j[counter];
            if (IS_MOVE_VALID(temp_i, temp_j, ROWS, COLS))
            {
                /* Check if the element residing at this position is the greatest */
                if (arr[temp_i][temp_j] > max) /* Assuming that all values are unique there will be no repition */
                {
                    max = arr[temp_i][temp_j];

                    max_i = temp_i;
                    max_j = temp_j;
                }
            }
        }

        /* Accumulate the maximum sum and move to the next indices */
        if (max != INT_MIN) /* There is an already valid index for i and j */
        {
            total_sum += max;
            i = max_i;
            j = max_j;
            is_there_valid_move = true;
        }
        else
        {
            is_there_valid_move = false;
        }
    }

    cout << "The total sum is: " << total_sum << endl;
}
