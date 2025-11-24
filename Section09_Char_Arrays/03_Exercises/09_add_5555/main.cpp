/*
============================================================
 Task Title    : Compare Two strings
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
   string str1{};
   string str2{};
   int result{0};
   int i{0};

   cout << "Enter the first string: ";
   cin >> str1;
   
   cout << "Enter the second string: ";
   cin >> str2;


   while(str1[i] || str2[i])
   {
        result = str1[i] - str2[i];
        if(result != 0)
        {
            break;
        }



    /* Iteration */
    i++;
   }

   if(result > 0)
   {
    cout << str1 << " is greater than " << str2 << endl;
   }
   else 
   {
       cout << str1 << " is greater than " << str2 << endl;
   }




}   
