/*
============================================================
 Task Title    : Max of 6 numbers 
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

int max(int a, int b, int c)
{
    int result{0};


    if(a > b && a > c)
    {
        result = a; 
    }
    else if(b > a && b > c)
    {
        result = b;
    }
    else 
    {
        result = c; 
    }

    return result;
}
int max(int a, int b, int c, int d)
{
    int subMax = max(a,b,c);

    return d > subMax ? d: subMax;
}
int max(int a, int b, int c, int d, int e)
{
    int subMax = max(a, b, c, d);

    return e > subMax ? e : subMax;
}
int max(int a, int b, int c, int d, int e, int f)
{
    int subMax = max(a, b, c, d, e);

    return f > subMax ? f : subMax;
}

int main(void)
{
    int a{1},b{2},c{3},d{4},e{5},f{6};

    cout << max(a,b,c,d,e,f) << endl;
}