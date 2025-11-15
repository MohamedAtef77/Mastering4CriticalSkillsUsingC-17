/*
============================================================
 Draft Title   : Fibonacci Series using while loops
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
    cout << "Enter the number of terms: ";

    int requested_terms{0};
    if (!(cin >> requested_terms) || requested_terms <= 0)
    {
        cout << "Please enter a positive integer value for the number of terms." << endl;
        return 1;
    }

    int n1{0};
    int n2{1};
    int count{requested_terms};
    int original_count{requested_terms};

    count /= 2;
    while (count > 0)
    {
        cout << n1 << " ";
        cout << n2 << " ";

        n1 = n1 + n2;
        n2 = n1 + n2;

        count--;
    }
    if (original_count % 2)
    {
        cout << n1;
    }
    cout << endl;
    return 0;
}
