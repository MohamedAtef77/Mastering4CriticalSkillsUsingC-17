/*
============================================================
 Draft Title   : Check and convert chars 
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
    char ch1 = 'D';

    if ('A' <= ch1 && ch1 <= 'Z')
    {
        cout << ch1 << " is an upper case\n";
        ch1 = ch1 - 'A' + 'a';
        cout << ch1 << " now is a lower case\n";
    }
    else if ('z' <= ch1 && ch1 <= 'z')
    {
        cout << ch1 << " is already a lower case\n";
    }
    else if ('0' <= ch1 && ch1 <= '9')
        cout << ch1 << " is a digit\n";
    else
        cout << ch1 << " is neither a digit nor a letter\n";

    return 0;
}