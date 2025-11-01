/*
============================================================
 Draft Title   : Other Important Data Types
 Module        : Section 04 – Data Types And Variables 
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

    double weight = -92.5; 

    char group = 'd';

    bool is_male = true; /* Unlike C, C++ has a type bool */

    int age = 55; 

    string name = "Atef"; /* You can declare a string without any header inclusion in C++ */

    cout << "I am " << age << " years old" << endl;

    cout << "I weigh " << weight << " Kgs." << endl;

    cout << "My name is " << name << "and I belong to group " << group << endl; 

    cout << "Gender check: is male ? " << is_male << endl; 

    /* When you start writing a program, you have to start thinking about the right data types */

}