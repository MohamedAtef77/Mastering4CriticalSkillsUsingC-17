/*
============================================================
 Draft Title   : Is lower best way 
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
#include <cmath>
#include <cstdlib>
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
int main()
{
    cout << abs(-2) << "\n";     // 2
    cout << fabs(-2.4) << "\n";  // 2.4
    cout << ceil(2.4) << "\n";   // 3
    cout << floor(2.4) << "\n";  // 2
    cout << round(2.4) << "\n";  // 2
    cout << round(2.5) << "\n";  // 3
    cout << round(2.6) << "\n";  // 3
    cout << round(-2.6) << "\n"; // -3
    cout << round(-2.4) << "\n"; // -2
    cout << ceil(-2.4) << "\n";  // -2   ** TRICKY
    cout << floor(-2.4) << "\n"; // -3   ** TRICKY
    cout << sqrt(16) << "\n";    // 4
    cout << isalpha('A') << "\n";       // 1024 = true
    cout << isalpha('4') << "\n";       // 0
    cout << isdigit('3') << "\n";       // 1 = true
    cout << isdigit('A') << "\n";       // 0
    cout << isupper('A') << "\n";       // 256 = true
    cout << isupper('a') << "\n";       // 0
    cout << (char)tolower('X') << "\n"; // x
    cout << (char)toupper('x') << "\n"; // X

    cout << max(5, 9) << "\n";   // 9
    cout << pow(2, 4) << "\n";   // 16
    cout << pow(2, 4.1) << "\n"; // 17.1484
    cout << log2(16) << "\n";    // 4
    cout << log10(1000) << "\n"; // 3

    cout << (double)rand() / RAND_MAX << "\n"; // 0.840188
}
