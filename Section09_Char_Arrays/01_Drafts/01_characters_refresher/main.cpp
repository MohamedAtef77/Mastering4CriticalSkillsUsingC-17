/*
============================================================
 Draft Title   : Declaring an array
 Module        : Section 09 – Charachter Arrrays
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
    char ch1{'A'};
    int ch_value = ch1;

    cout << ch_value << endl; 
    cout << (int)'A' << endl;
    cout << (int)'B' << endl;
    cout << (int)'C' << endl;
    cout << (int)'Z' << endl;
    cout << (int) 'A' + 26 - 1 << endl;


    char ch2 = 90;
    cout << ch2 << endl;

    cout << "******************************" << endl;
    cout << (int)'a' << "\n";
    cout << (int)'b' << "\n";
    cout << (int)'c' << "\n";
    cout << (int)'z' << "\n";
    cout << (int)'a' + 26 - 1 << "\n";

    cout << ('A' < 'a') << "\n";
    return 0;
}