/*
============================================================
 Draft Title   : Creating an infinite loop
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
    const int size{5};

    int arr[size]{1,2,3,4,5};
    
    /* Printing Forward */
    for(int i = 0; i < size; ++i)
    {
        if(i >= 1)
        {
            cout << ", ";
        }
        cout << arr[i] << " ";
    }
    cout << endl;


    /* Printing Backward */
    for (int i = 4; i >= 0; --i)
    {
        if (i < 4)
        {
            cout << ", ";
        }
        cout << arr[i] << " ";
    }
    cout << endl;
}