/*
============================================================
 Task Title    : Conditional Count
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
    int x{0};
    int num1{0};
    int num2{0};
    int num3{0};
    int num4{0};
    int num5{0};
    int less_than_count{0};
    int greater_than_count{0};


    cout << "Enter X: "; 
    cin >> x; 

    cout << "Enter five spaced numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5; /* Works Perfect */

    if(num1 <= x)
    {
        less_than_count++;
    }
    else
    {
        greater_than_count++;
    }


    if(num2 <= x)
    {
        less_than_count++;
    }
    else
    {
        greater_than_count++;
    }

    if(num3 <= x)
    {
        less_than_count++;
    }
    else
    {
        greater_than_count++;
    }

    if(num4 <= x)
    {
        less_than_count++;
    }
    else
    {
        greater_than_count++;
    }

    if(num5 <= x)
    {
        less_than_count++;
    }
    else
    {
        greater_than_count++;
    }  
    
    cout << "The count of numbers less than " << x << " is: " << less_than_count << endl;
    cout << "The count of numbers greater than " << x << " is: " << greater_than_count << endl;

}