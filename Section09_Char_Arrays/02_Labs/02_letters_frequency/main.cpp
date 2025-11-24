/*
============================================================
 Draft Title   : Letters Frequency
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
    int freq_arr[26]{};


    cout << "Enter the string: ";
    getline(cin,s1);


    for(int i = 0; i < s1.size(); ++i)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            freq_arr[s1[i] - 'a']++;
        }
    }

    cout << "The frequency Array: " << endl;
    for(int i = 0; i < 26; ++i)
    {
        if(freq_arr[i] > 0)
        {
            cout << (char) ((char) 'a' + i) << " : " << freq_arr[i]  << endl;
        }
    }

}