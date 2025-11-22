/*
============================================================
 Draft Title   : Maximum Sum Of A Pair 
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
    int max{0}, second_max{0};


    cout << "Enter the number of entries: ";
    cin >> arr_size;

    cout << "Enter the spaced numbers: ";


    for(int i = 0; i < arr_size; ++i)
    {
        cin >> arr[i];
    }

    max = arr[0];
    second_max = INT_MIN;

    for(int i = 1; i < arr_size; ++i)
    {
        if(arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max)
        {
            second_max = arr[i];
        }
    }

    cout << "The Maximum Sum Of A Pair is: " << (max + second_max) << endl;
    
    
}