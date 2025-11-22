/*
============================================================
 Task Title    : Count Increasing Sub-arrays 
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
/*
============================================================
 Task Title    : Count Increasing Sub-arrays (Refactored)
 Key Improvements:
 - Fixes N=1 bug.
 - Removes complex state flags (is_last_op_decline).
 - Uses cumulative counting logic.
============================================================
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n{0};
    int arr[200]{}; /* Note: Consider using vector<int> for flexibility, but array is fine per constraints. */

    /* Output variable must be long long to prevent overflow
       if N was large, though for N=200 int is fine. */
    int total_result{0};
    int current_length{0}; /* Tracks length of CURRENT increasing sequence */

    cout << "Enter the number of elements: ";
    cin >> n;

    /* Edge case handling for N=0 */
    if (n == 0)
    {
        cout << "The count of increasing sub-arrays is: 0" << endl;
        return 0;
    }

    cout << "Enter (spaced) elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    /* Loop through the array */
    for (int i = 0; i < n; ++i)
    {
        /* If it's the first element OR current is strictly greater than previous */
        if (i == 0 || arr[i] > arr[i - 1])
        {
            current_length++;
        }
        else
        {
            /* Sequence broken, reset length to 1 (counting the current element itself) */
            current_length = 1;
        }

        /* Key Logic: Add the current length to total.
           If sequence is [1, 2, 3] (len 3), the subarrays ending at '3' are [3], [2,3], [1,2,3].
           Exactly 3 new subarrays. */
        total_result += current_length;
    }

    cout << "The count of increasing sub-arrays is: " << total_result << endl;

    return 0;
}
