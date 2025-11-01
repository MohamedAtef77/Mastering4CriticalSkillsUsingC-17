/*
============================================================
 Task Title    : Even and Odd Sums
 Module        : Section 04 – Data Types And Variables 
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
    int num1, num2, num3, num4, num5, num6, num7, num8;

    int even_sum{0};
    int odd_sum{0};

    /* Taking Inputs */
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8; 


    even_sum = num2 + num4 + num6 + num8;
    odd_sum  = num1 + num3 + num5 + num7;

    cout << even_sum << " " << odd_sum << endl;

}   