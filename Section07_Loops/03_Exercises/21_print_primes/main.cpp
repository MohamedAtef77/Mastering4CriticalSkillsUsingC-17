/*
============================================================
 Task Title    : Print Primes
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
    /* The most optimized solution using chatgpt 5.1 */
    long long n{0};
    long long i{0};
    long long count{0};
    bool is_prime{false};
    bool printed_first{false};
    cout << "Enter a number: ";
    cin >> n;
    for(count = 1 ; count < n; count++)
    {
        for(i = 2; i < count; i++)
        {
            if(!(count%i))
            {
                break;
            }
        }

        if(i == count) /* The loop has finsihed till the end */
        {
            if(printed_first)
                cout << ", ";
            cout << count;
            printed_first = true;
        
        }
    }
    cout << endl;

}
