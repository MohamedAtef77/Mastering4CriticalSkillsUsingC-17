/*
============================================================
 Task Title    : Primitive Initialization
 Module        : Section 14 - Structures
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
#include <algorithm>
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


struct employee
{
    int id; 
    string name;
};
int main(int argc, char const *argv[])
{
    /* code */
    employee emp1; // Default Initialization 
    employee emp2(); // Function Declaration 
    employee emp3{}; // Value Initialization 


    employee(); // Temp object 
    employee{}; // Temp object 


    employee emp4{10,"Mohamed"}; // Aggregate 
    char arr1[]{'h','i'}; // Aggregate 

    return 0;
}
