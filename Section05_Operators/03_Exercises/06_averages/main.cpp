/*
============================================================
 Task Title    : Averages  
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
#include <cmath>
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
    int n1{0};
    int n2{0};
    int n3{0};
    int n4{0};
    int n5{0};

    double avg1{0.0};
    double op1{0.0};
    double sum1{0.0};


    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Enter the third number: ";
    cin >> n3;

    cout << "Enter the fourth number: ";
    cin >> n4;

    cout << "Enter the fifth number: ";
    cin >> n5;

    avg1 = ((double) n1 + n2 + n3 + n4 + n5) / 5;

    cout << "The average of the five numbers you entered is: " << avg1 << endl;


    sum1 = ((double)n1 + n2 + n3) / (n4 + n5);
    cout << "The sum of the first three numbers divided by the sum of the last two numbers: " << sum1 << endl;   

    op1 = (((double) n1 + n2 + n3) / 3) / (((double) n4 + n5)/2);

    cout << "The average of the first three numbers divided by the average of the last two numbers: " << op1 << endl;


}   