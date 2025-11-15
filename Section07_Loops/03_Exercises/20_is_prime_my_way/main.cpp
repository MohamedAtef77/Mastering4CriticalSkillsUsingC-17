/*
============================================================
 Task Title    : Is Prime (my way)? 
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

    long long n{0};
    long long i{0};
    bool is_prime{false};
    cout << "Enter a number: ";
    cin >> n;

    for(i = 2; i < n; i++)
    {
        if(!(n%i))
        {
            break;
        }
    }

    if(i == n) /* The loop has finsihed till the end */
    {
        is_prime  = true;
    }

    if(is_prime)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }


}
