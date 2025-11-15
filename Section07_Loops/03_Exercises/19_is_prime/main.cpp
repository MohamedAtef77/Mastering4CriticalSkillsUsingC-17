/*
============================================================
 Task Title    : Is Prime ? 
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
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    bool is_prime = true;

    /* 1. Handle edge cases (0, 1) */
    if (n <= 1)
    {
        is_prime = false;
    }
    /* 2. Handle small primes (2, 3) */
    else if (n <= 3)
    {
        is_prime = true;
    }
    /* 3. Eliminate multiples of 2 and 3 immediately */
    else if (n % 2 == 0 || n % 3 == 0)
    {
        is_prime = false;
    }
    /* 4. Check remaining numbers (skipping 2s and 3s) */
    else
    {
        /* We start at 5 and jump 6 steps at a time */
        /* We check i (form 6k-1) and i+2 (form 6k+1) */
        for (long long i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                is_prime = false;
                break; // Found a divisor, stop immediately
            }
        }
    }

    if (is_prime)
        cout << n << " is Prime." << endl;
    else
        cout << n << " is Not Prime." << endl;

    return 0;
}
