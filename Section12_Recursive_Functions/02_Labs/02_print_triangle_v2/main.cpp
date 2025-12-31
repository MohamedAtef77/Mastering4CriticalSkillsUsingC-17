/*
============================================================
 Task Title    : Print Triange v1
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
void print_row_recursive(int len)
{

    if(len <=0)
    {
        cout << endl;
    }
    else 
    {
        cout << "*";
        print_row_recursive(len -1);
    }
}
void print_triange_v1_recursive(int n, int start = 1)
{
    if(start > n)
    {
        return;
    }
    print_row_recursive(start);
    print_triange_v1_recursive(n,start + 1);
}
int main(int argc, char const *argv[])
{
    print_triange_v1_recursive(5); /* Nice one using the default parameter */


    return 0;
}
