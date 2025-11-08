/*
============================================================
 Draft Title   : Comparing Strings
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
    string name1{"ali"};
    string name2{"ali mostafa"};
    string name3{"ziad"};
    string name4{"ali"};
    string name5{"ALI"};

    cout << (name1 < name2) << endl;
    cout << (name1 > name3) << endl;
    cout << (name1 == name4) << endl;


    cout << (name1 == name5) << endl;
    cout << (name1 > name5) << endl;

    /*
    Names are sorted in a dictionary 
    So comparison is based on it 
    Upper case comes first before lower case 
    Letter 'a' is smaller than 'A' 
    */



}