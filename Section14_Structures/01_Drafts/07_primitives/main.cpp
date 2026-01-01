/*
============================================================
 Task Title    : Primitive Initialization
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



int main(int argc, char const *argv[])
{
    char arr1[] = "Hello"; /* Copy Initialization */
    char arr2[] = {"Hello"}; /* List Initialization */
    char arr3[]{"Hello"}; /* Unifrom Initialization */
    char arr4[]("Hello"); /* Parenthesis Initialization */



    int x0; /* Default Iinitialization */
    int x1 = 5; /* Copy Initialization */
    int x2(5); /* Direct Initalization */
    int x3{5}; /* Uniform / List initialization */


    int y1{}; /* Value Initialization for primitives */
    int y2(); /* Function Prototype */
    cout << y1 << endl;


    double z = 10;
    int z1 = z; 
    int z2{z}; /* Narrowing Warning */


    /* code */
    return 0;
}
