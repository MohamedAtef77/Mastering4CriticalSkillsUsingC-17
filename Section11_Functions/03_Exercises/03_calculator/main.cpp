/*
============================================================
 Task Title    : Calculator 
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
#include <string>

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
void read_operands(double &n1, double &n2)
{
    cout << "Enter the first operand: ";
    cin >> n1;

    cout << "Enter the second operand: ";
    cin >> n2; 


}
double add_two_numbers(const double &a, const double &b)
{
    return a+b;

}
double subtract_two_numbers(const double &a, const double &b)
{
    return a - b; 
}
double multiply_two_numbers(const double &a, const double &b)
{
    return a * b;
}
double divide_two_numbers(const double &a, const double &b)
{
    return a / b;
}
char read_operator(void)
{
    char op;
    cout << "Enter operator (+,-,*,/) or q to exit: ";
    cin >> op; 

    return op; 
}

int caluculator(void)
{
    char op = 's'; /* Available characters s, +,-,*,/, q */
    double op1, op2, result;
    static int no_of_usages{0};

    cout << "This is a simple calculator program. " << endl;

    while(true)
    {
        read_operands(op1,op2);
        op = read_operator();
        if (op == 'q' || op == 'Q')
        {
            break;
        }
        

        no_of_usages ++; 


        switch(op)
        {
            case '+':
                result = add_two_numbers(op1,op2);
                break;
            case '-':
                result = subtract_two_numbers(op1,op2);
                break;
            case '*':
                result = multiply_two_numbers(op1,op2);
                break;
            case '/':
                result = divide_two_numbers(op1,op2);
                break;
            default:
                cout << "Unsupported operator. Try again." << endl;
                op = read_operator();
                continue;
        }

        cout << "Result: " << result << endl;

        cout << "Enter 'q' to quit or any other key to continue: ";
        cin >> op;
        if (op == 'q' || op == 'Q')
        {
            break;
        }
    }

    return no_of_usages;
}
int main(int argc, char const *argv[])
{
    int count{0};
    
    count = caluculator();
    cout << "This program was used for " << count << " time(s)." << endl;

    return 0;
}
