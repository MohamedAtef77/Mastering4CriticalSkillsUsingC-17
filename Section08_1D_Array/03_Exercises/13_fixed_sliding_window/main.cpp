/*
============================================================
 Task Title    : Fixed Sliding window 
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
    int n{0}, k{0};
    int arr[200];
    int sums[200];
    int i{0};
    int max_sum_end_index{0};
    int max_sum{0};


    cout << "Enter n: ";
    cin >> n; 

    cout << "Enter k: ";
    cin >> k;

    /* Read the data */
    /* Calculate the accumulative sums */
    cout << "Enter n spaced elements: ";
    for(i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if(i > 0)
        {
            sums[i] = sums[i-1] + arr[i]; /* accuulate */
        }
        else /* This is the first time o calculate accumulative sum */ 
        {
            sums[0] = arr[0];
        }

    }


    max_sum = sums[k-1];
    for(i = k;i < n; ++i)
    {
        int curr_sum = sums[i] - sums[i - k];
        cout << "Curr sum: " << curr_sum << endl;
        if(curr_sum >max_sum)
        {
            max_sum = curr_sum;
            max_sum_end_index = i;
        }
    }
    cout << "Max Start Index : " << (max_sum_end_index - k + 1) << endl;
    cout << "Max End Index: " << max_sum_end_index << endl;
    cout << "Max Sum Value: " << max_sum << endl;
    cout << endl;
}


