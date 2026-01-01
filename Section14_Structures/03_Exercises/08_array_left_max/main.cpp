/*
============================================================
 Task Title    : Array left max using recursion
 Module        : Section 12 – Recursive Functions
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

int our_max(int arr[], int len, int start = 0, int max = INT_MIN)
{

    if (start < len)
    {
        if (arr[start] > max)
        {
            max = arr[start];
        }
        else
        {
            arr[start] = max;
        }
    }
    else
    {
        return max;
    }

    return our_max(arr, len, start + 1, max);
}
int main(int argc, char const *argv[])
{

    int arr[] = {1, 3, 5, 7, 4, 2};

    cout << our_max(arr, sizeof(arr) / sizeof(arr[0])) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
