/*
============================================================
 Task Title    : Array Accumulation
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

void array_acc(int arr[], int len, int start = 0)
{

    if(start < (len - 1))
    {
        arr[start + 1] += arr[start];
        array_acc(arr,len, start +1);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int arr[]{1,2,3,4}; // 1,3,7,12
    
    array_acc(arr,4);

    for(int i = 0; i < 4; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}

