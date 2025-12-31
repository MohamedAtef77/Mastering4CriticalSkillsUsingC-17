/*
============================================================
 Task Title    : Set Powers 
 Module        : Section 11 – Functions
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
#include <string>

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
void set_powers(int arr[], int len = 5, int m = 2)
{
    arr[0] = 1 ; 
    int mul = m;

    for(int i = 1 ; i < len; ++i)
    {
        arr[i] = mul;
        mul *= m;
    }
}
void print_arr(const int arr[], int len)
{
    for(int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[100];
    set_powers(arr,6,2);
    print_arr(arr,6);

    return 0;
}
