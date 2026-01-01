/*
============================================================
 Task Title    : Assigning Elements to a struct 
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
    string name;
    int age; 
    double salary; 
    char gender; 
};
const int MAX{1000};
employee employees_array[1000]; /* Unlike C you can type employee without struct keyword before it */
int added{0};
int main(int argc, char const *argv[])
{

    employee first{"Mostafa",10, 1200.5, 'M'};

    employees_array[added] = first; /* It is not applicable in C to do things this way */
    cout << first.name << endl;


    employees_array[added].name = "Hani";
    employees_array[added].age = 55;
    employees_array[added].salary = 750;
    employees_array[added].gender = 'M';

    
    return 0;
}
