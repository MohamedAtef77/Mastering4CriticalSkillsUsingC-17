/*
============================================================
 Task Title    : Digits sum in range 
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
    int A{0};
    int B{0};
    int temp_num{0};
    int sum{0};
    int total_sum{0};

    cout << "Enter N: ";
    cin >> N;


    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    for(int i = 1 ; i <= N; i++)
    {
        /* Get the sum of the digits which form i */
        temp_num = i; 
        sum = 0;
        while(temp_num != 0)
        {
            sum += (temp_num % 10);
            temp_num /= 10;
        }

        if((sum >= A) && (sum <= B))
        {
            total_sum += i;
        }
    }

    cout << "Total sum: " << total_sum << endl;

}
