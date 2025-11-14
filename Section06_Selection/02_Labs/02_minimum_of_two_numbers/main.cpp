/*
============================================================
 Draft Title   : Simple Calculator
 Module        : Section 06 – Selection
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
    double num1{0.0};
    double num2{0.0};
    char op;
    double result{0.0};
    bool invalid_op_flag{false};

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2; 


    cout << "Enter the operation: ";
    cin >> op;

    if(op == '+')
    {
        result = num1+num2; 
    }
    else if(op == '-')
    {
        result = num1 - num2;
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }
    else if(op == '/' && num2 != 0.0)
    {
        result = num1 / num2;
    }
    else if(op == '/' && num2 == 0.0)
    {
        cout << "Wrong operation / can not divide by zero." << endl;
        invalid_op_flag = true;
    }
    else 
    {
        cout << "Invalid operation" << endl;
        invalid_op_flag = true;
    }


    if(invalid_op_flag != true)
    {
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }

}