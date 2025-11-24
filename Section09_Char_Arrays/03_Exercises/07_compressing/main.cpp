/*
============================================================
 Task Title    : Compressing
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
    string str;
    int freq_arr[256]{};
    char ch_seq[256];
    bool first_{false};
    int seq_ctr{};
    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.size(); ++i)
    {
        if ((i == 0 || str[i] != str[i - 1]) && ((str[i] >= '0' && str[i] <= 'z')))
        {
            ch_seq[seq_ctr++] = str[i];
        }

        if(str[i] >= '0' && str[i] <= 'z')
        {
            freq_arr[str[i]]++; 
        }
    }

    for(int i = 0 ; i < seq_ctr; ++i)
    {

        if (first_ == false)
        {
            first_ = true;
        }
        else
        {

            cout << "_";
        }
        cout << ch_seq[i] << freq_arr[ch_seq[i]];
    }
    cout << endl;


}   
