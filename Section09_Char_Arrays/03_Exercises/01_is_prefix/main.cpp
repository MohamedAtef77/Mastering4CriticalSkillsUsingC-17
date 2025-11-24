/*
============================================================
 Task Title    : Is Prefix ? 
 Module        : Section 9 – Char Arrays
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
    string s1{};
    string s2{};
    int i{0};


    cout << "Enter the first string: ";
    cin >>  s1;

    cout << "Enter the second string: ";
    cin >> s2;

    // Stop comparing once we reach the end of either string
    for(i = 0; i < s2.size() && i < s1.size(); ++i)
    {
        
        if(s1[i] != s2[i])
        {
            break;
        }
    }

    if(i == s2.size())
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    


}   
