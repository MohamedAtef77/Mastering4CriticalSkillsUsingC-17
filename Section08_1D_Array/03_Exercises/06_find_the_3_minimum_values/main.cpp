/*
============================================================
 Task Title    : Find the 3 minimum values 
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
    int min1{INT_MAX},min2{INT_MAX},min3{INT_MAX};
    int i{};

    cout << "Enter the number of elements: "; /* The number of elemenets can not be less than 1  */
    cin >> arr_size;

    cout << "Enter the spaced numbers: ";

    for (i = 0; i < arr_size; ++i)
    {
        cin >> arr[i];

        /* Evaluate the three minimums */
        if(arr[i] < min1)
        {
            min3 = min2;
            min2 = min1; 
            min1 = arr[i];
        }
        else if(arr[i] < min2)
        {
            min3 = min2;
            min2 = arr[i];
        }
        else if(arr[i] < min3)
        {
            min3 = arr[i];
        }
    }

    cout << min1 << " " << min2 << " " << min3 << endl;
}


