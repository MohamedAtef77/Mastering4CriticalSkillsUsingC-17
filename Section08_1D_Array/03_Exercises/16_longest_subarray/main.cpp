/*
============================================================
 Task Title    : Josephus Problem 
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

int main()
{
    int N;
    cin >> N;

    int a[1000]; // N < 1000 as per problem
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    const int OFFSET = N;    // to shift sums [-N..N] into [0..2N]
    int first[2 * 1000 + 1]; // enough for N up to 1000

    // Initialize all as "never seen"
    for (int i = 0; i < 2 * N + 1; ++i)
    {
        first[i] = -2; // -2 = never seen
    }

    int sum = 0;
    int bestLen = 0;

    // sum = 0 is considered seen at index -1 (before array starts)
    first[0 + OFFSET] = -1;

    for (int i = 0; i < N; ++i)
    {
        // treat 0 as -1, 1 as +1
        if (a[i] == 1)
            sum += 1;
        else
            sum -= 1;

        int idx = sum + OFFSET;

        if (first[idx] == -2)
        {
            // first time we see this prefix sum
            first[idx] = i;
        }
        else
        {
            // seen before: subarray (first[idx] + 1 .. i) has sum 0
            int len = i - first[idx];
            if (len > bestLen)
                bestLen = len;
        }
    }

    cout << bestLen << "\n";
    return 0;
}
