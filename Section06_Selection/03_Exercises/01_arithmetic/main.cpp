/*
============================================================
 Task Title    : Arithmetic
 Module        : Section 05 – Operators
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
    int num1{0};
    int num2{0};

    cout << "Enter the first integer: ";
    cin >> num1; 

    cout << "Enter the second integer: ";
    cin >> num2;

    if((num1 % 2) && (num2 % 2)) /* Both are odd */
    {
        cout << "The product of the two integers: " << (num1 * num2) << endl;
    }
    else if(!((num1 % 2) || (num2 % 2))) /* Both are even */
    {
        cout << "The division of the first integer over the second integer: " << (num1 / num2) << endl;
 
    }
    else if(num1 % 2) /* The first is odd and the second is even */
    {
        cout << "The sum of the two integers: " << (num1 + num2) << endl;
    }
    else /* The first is even */ 
    {
        cout << "The subtraction of the two integers (First - Second): " << (num1 - num2) << endl;
    }


}   