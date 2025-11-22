/*
============================================================
 Task Title    : Smallest Pair
 Module        : Section 08 – 1D Arrays
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
int main(void)
{
    int arr_size{0};
    const int max_arr_size{500};
    int arr[max_arr_size]{};
    int smallest_pair_i{0};
    int i{0},min_i_term{INT_MAX}, min_j_term{INT_MAX};


    cout << "Enter the number of elements: "; /* The number of elemenets can not be less than 1  */
    cin >> arr_size;

    cout << "Enter the spaced numbers: ";

    for (i = 0; i < arr_size; ++i)
    {
        cin >> arr[i];
    }

    /* Initialize min_i_term with the first element (index 0) */
    min_i_term = arr[0] - 0;

    int min_result = INT_MAX;

    /* Start j from the second element */
    for (int j = 1; j < arr_size; j++)
    {
        /* 1. Calculate the cost if 'j' is the second number in the pair
           and we pair it with the best 'i' we've seen SO FAR. */
        int current_j_term = arr[j] + j;
        int current_total = min_i_term + current_j_term;

        if (current_total < min_result)
        {
            min_result = current_total;
        }

        /* 2. Update min_i_term.
           Does the current element (index j) offer a better starting point
           for FUTURE pairs? */
        if ((arr[j] - j) < min_i_term)
        {
            min_i_term = arr[j] - j;
        }
    }

    cout << "Result: " << min_result << endl;
}   