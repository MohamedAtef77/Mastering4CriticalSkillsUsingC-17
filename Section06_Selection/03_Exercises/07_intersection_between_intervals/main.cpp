/*
============================================================
 Task Title    : Intersection between two intervals
 Module        : Section 06 – Selection
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
    int x{0};
    int s1{0},e1{0};
    int s2{0},e2{0};

    cout << "Enter the start of the first interval: ";
    cin >> s1; 

    cout << "Enter the end of the first interval: ";
    cin >> e1;

    cout << "Enter the start of the second interval: ";
    cin >> s2;

    cout << "Enter the end of the second interval: ";
    cin >> e2;

    int start = s1 > s2 ? s1:s2;
    int end = e1 < e2 ? e1 : e2; 

    if (start <= end)
    {
        cout << "There is an intersection [" << start << " , " << end << " ]\n";
    }
    else
    {
        cout << "There is no intersection.\n";
    }
}
