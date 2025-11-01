/*
============================================================
 Task Title    : Student Grades
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
    string name1,name2; 
    int id1{0},id2{0};
    double grade1{0.0},grade2{0.0}; /* Placeholder grades defaulted to zero */

    /* Input Insertion */
    cout << "Enter the name of the first student: ";
    cin >> name1; 

    cout << "Enter the name of the second student: ";
    cin >> name2;  
    
    cout << "Enter the ID of the first studnet: "; 
    cin >> id1;

    cout << "Enter the ID of the first studnet: "; 
    cin >> id2;

    cout << "Enter the grade of the first student: "; 
    cin >> grade1; 

    cout << "Enter the grade of the first student: "; 
    cin >> grade2;    

    /* Outputting */
    cout << name1 << " with ID " << id1 << " has a grade of: " << grade1 << endl;
    cout << name2 << " with ID " << id2 << " has a grade of: " << grade2 << endl;
    cout << "Averge Grade is: " << (grade1 + grade2) / 2 << endl;

    

}   
