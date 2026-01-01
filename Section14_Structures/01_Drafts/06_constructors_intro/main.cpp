/*
============================================================
 Task Title    : Constructors intro 
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


struct full_name
{
    string first_name;
    string middle_name; 
    string last_name;


    full_name()
    {
        first_name = "";
        middle_name = "";
        last_name = "";

    }
    full_name(string _first , string _last = "")
    {
        first_name = _first;
        last_name = _last;
        middle_name = "";
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    full_name name1;

    full_name name2("Mohamed");

    full_name name3("Mohamed", "Atef");

    
    return 0;
}
