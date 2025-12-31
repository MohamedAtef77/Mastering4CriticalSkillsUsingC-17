/*
============================================================
 Task Title    : Replace a substring
 Module        : Section 11 – Functions
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
#include <string>

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
bool starts_with(string input, string pattern, int pos)
{
    int i{0};

    for(i = 0; i < input.length() && input[pos] == pattern[i]; ++i, ++pos)
    {
        /* Do Nothing */
    }

    return i == pattern.length() ? true : false;
}
string replace_str(string input, string pattern, string to)
{
    int pattern_start_indices[100];
    int pattern_start_indices_counter{0};
    string new_string{""};
    int i{0};
    int j{0};


    /* Identify Pattern Locations */
    for(i = 0; i < input.length(); ++i)
    {
        if(starts_with(input,pattern,i))
        {
            pattern_start_indices[pattern_start_indices_counter] = i;
            ++ pattern_start_indices_counter;
        }
    }

    /* format the new string */
    i = 0;

    while(i < input.length() && j < pattern_start_indices_counter)
    {
        if(i != pattern_start_indices[j]) /* This is a normal character, copy as it is to the new string */
        {
            new_string.push_back(input[i]);

            /* Increment i by one */
            ++i;
        }
        else /* This is the start of the pattern sequence of characters */
        {
            /* increment j to point to the new index */
            ++j;

            /* increment i by the length of the pattern string */
            i += pattern.length();

            /* Append the to pattern to the new string */
            new_string += to;
        }
    }


    return new_string; 
}
int main(int argc, char const *argv[])
{
    string original; 
    string pattern;
    string replacement; 

    cout << "Enter original string: ";
    getline(cin,original);

    cout << "Enter replaced pattern: ";
    getline(cin, pattern);

    cout << "Enter pattern to be place: ";
    getline(cin, replacement);

    cout << replace_str(original,pattern,replacement);
    return 0;
}
