/*
============================================================
 Draft Title   : Find the first and second maximum values 
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
/*============================================================
 File Inclusions
============================================================*/
#include <iostream>
#include <string> // Required for std::string
#include <vector>

using namespace std;

int main(void)
{
    string s1;
    string s2;

    // Using a char array as requested, but checking bounds is safer.
    // Ideally, in C++, we would just use 'string s_total;'
    const int MAX_SIZE = 1000;
    char s_total[MAX_SIZE] = "";

    int i = 0;             // Index for input strings
    int total_counter = 0; // Index for output string

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    // Cache lengths to avoid recalculating
    int len1 = s1.length();
    int len2 = s2.length();

    /* Loop while BOTH strings have characters remaining */
    // BUG FIX: Use length comparison instead of existence check
    while (i < len1 && i < len2)
    {
        if (total_counter < MAX_SIZE - 2) // Safety check for buffer overflow
        {
            s_total[total_counter++] = s1[i];
            s_total[total_counter++] = s2[i];
        }
        i++;
    }

    /* Get the rest of s1 if it is longer */
    while (i < len1)
    {
        if (total_counter < MAX_SIZE - 1)
        {
            s_total[total_counter++] = s1[i];
        }
        i++;
    }

    /* Get the rest of s2 if it is longer */
    // BUG FIX: This loop will only execute if s2 was effectively longer than s1
    while (i < len2)
    {
        if (total_counter < MAX_SIZE - 1)
        {
            s_total[total_counter++] = s2[i];
        }
        i++;
    }

    // Explicitly null terminate the string just in case
    s_total[total_counter] = '\0';

    /* Output the result */
    cout << "The total special string is: " << s_total << endl;

    return 0;
}