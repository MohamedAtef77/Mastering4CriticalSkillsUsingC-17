/*
============================================================
 Task Title    : Create Logic  
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
    int nb{0};
    int ng{0};
    int nt{0};
    cout << "Enter the number of boys: " ; 
    cin >> nb;

    cout << "Enter the number of girls: ";
    cin >> ng; 

    cout << "Enter the number of teahcers: ";
    cin >> nt;

    cout << (nb > 25) << endl;
    
    cout << (ng < 30) << endl;

    cout << ((nb > 20) && (nt > 2) || (ng > 20 ) && (nt > 4)) << endl ; 

     cout << ((nb < 60 )|| (ng < 70)) << endl;

    cout << !((nb < 60 )|| (ng < 70)) << endl;

    cout << ((nb + 10) == ng) << endl;

    cout << (abs(nb-ng) > 10 || (nt < 5)) << endl; 
    cout << ((nb - 10) == ng || (ng - 15) == nb) << endl; 




}   