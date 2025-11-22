/*
============================================================
 Task Title    : Replace Min Max
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
    const int max_arr_size{200};
    int arr[max_arr_size]{};
    int i{};
    int min{INT_MAX},max{INT_MIN};


    cout << "Enter the number of elements: ";
    cin >> arr_size;

    cout << "Enter the spaced numbers: ";

    /* Evaluate MIN and MAX values */
    for (i = 0; i < arr_size; ++i)
    {
        cin >> arr[i];
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
        else 
        {
            /* Do Nothing */
        }

    }

    /* Do The required changes */
    for (i = 0; i < arr_size; ++i)
    {
        if(arr[i] == max)
        {
            arr[i] = min;
        }
        else if(arr[i] == min)
        {
            arr[i] = max; 
        }
    }

    /* Print the array */
    for(i = 0; i < arr_size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}   