
/*
============================================================
 Task Title    : Special Sum 
 Module        : Section 07 – Loops
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
    int no_of_tcs{0};
    int no_of_entries{0};
    int counter{1};
    int temp{0};
    int sum{0};
    int pow{1};
    int result{1};

    cout << "Enter the number of Test Cases: ";
    cin >> no_of_tcs;

    while(no_of_tcs > 0)
    {

        cout << "Enter the number of entries: ";
        cin >> no_of_entries; 
        cout << "Input the Entries: ";

        
        counter = 1; 

        while(counter <= no_of_entries)
        {   
            cin >> temp;
            pow = 1 ; 
            result = 1 ; 
            while(pow <= counter)
            {
                result *= temp;
                pow++;
            }
            sum += result;


            /* Iterating */
            counter++;
        }
        cout << "The sums is: " << sum << endl;
        sum = 0 ; 

        /* Iterating */
        no_of_tcs--;
    }
   
}