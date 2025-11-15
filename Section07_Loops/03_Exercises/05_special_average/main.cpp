
/*
============================================================
 Task Title    : Special Average 
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
int main()
{
    int num{0};
    int count{1};
    int x{0};

    double odd_count{0};
    double even_count{0};


    cout <<"Enter the count of numbers: ";
    cin >> num; 


    while(count <= num)
    {
        cin >> x;
        if (count % 2) /* Get the odd count */
        {
            odd_count += x;
        }
        else 
        {
            even_count += x;
        }

        /* Iteration */
        count++;
    }

    /* Calculate the average for the even count */
    even_count /= ((double)num / 2);

    /* Calculate the average for the odd count */
    odd_count /= ((num % 2) ? (((double)num / 2 + 1)): (double)num / 2);

    cout << "Even Average: " << even_count << endl;
    cout << "Odd Average: " << odd_count << endl;
}
