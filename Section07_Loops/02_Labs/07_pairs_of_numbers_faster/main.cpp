/*
============================================================
 Draft Title   : Pairs Of Numbers Faster
 Module        : Section 07 – Loops
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
    int N{0};
    int M{0};
    int sum{0};
    int i{0},j{0};
    int count{0};

    cout << "Enter Sum: ";
    cin >> sum;

    cout << "Enter N: ";
    cin >> N; 

    cout << "Enter M: ";
    cin >> M;

    for(i = 1 ; i <= N; ++i)
    {
        j = sum - i;

        if((j >= 1) && (j <= M))
        {
            count++;
        }
    }

    cout << "Count is: " << count << endl;



}