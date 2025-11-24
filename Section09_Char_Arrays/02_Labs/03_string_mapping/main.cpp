/*
============================================================
 Draft Title   : String Mapping
 Module        : Section 09 – Char Arrays
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
    string s1;
    string lower_case_mapping = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string digits_mapping = "!@#$%^&*()";

    cout << "Enter the string: ";
    getline(cin,s1);


    for(int i = 0; i < s1.size(); ++i)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            /* Replace it with its mapping */
            s1[i] = lower_case_mapping[s1[i] - 'a'];
        }
        else if(s1[i] >= '0' && s1[i] <= '9')
        {
            /* Replace it with its mapping */
            s1[i] = digits_mapping[s1[i] - 'a'];
        }
    }

    cout << "The string you entered after mapping: " << s1 << endl;


}