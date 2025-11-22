/*
============================================================
 Draft Title   : Array Initialization in C++
 Module        : Section 08 – 1D Arrays
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
    int arr1[100]{5};
    int arr2[]{1,2,4};
    int arr3[20]{}; /* This line declares an array of 20 integers where every single element is initialized to 0. */

    /* Line 67 (More Info From Gemini 3.0 Thinking)
        Here is the breakdown:

        int arr3[20]: Allocates memory for an array named arr3 capable of holding exactly 20 integers.

        {}: This is the Universal Initializer with an empty list.

        When you provide empty curly braces for built-in types (like int, float, char), the compiler performs value-initialization.

        For integers, value-initialization means setting the value to zero.

        In short: It is the modern, cleaner equivalent of writing int arr3[20] = {0}; or using memset to clear the memory. All 20 slots contain 0.
    */
    cout << arr1[1] << endl; /* The rest is initialized with zeros */

    cout << arr2[2] << endl; /* Autosizing worked */

}