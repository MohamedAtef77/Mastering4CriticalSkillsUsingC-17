/*
============================================================
 Draft Title   : Reshape 1D into 2D
 Module        : Section 10 – Multidimensional Arrays
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
int main()
{
    int arr1[3][4]{{}};
    int arr2[12]{1,2,3,4,5,6,7,8,9,10,11,12};
    int k{};
    
    /* Make each element fit into the 1D array */
    for(int i = 0; i < 12; ++i)
    {
        arr1[i/4][i%4] = arr2[i];
    }


    for(int i = 0; i < 3 ; ++i)
    {
        for(int j = 0; j < 4 ; ++j)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
}
