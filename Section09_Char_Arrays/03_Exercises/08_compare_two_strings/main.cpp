/*
============================================================
 Task Title    : Add 5555
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
    string number{};
    string new_number{};
    string added_number{"5555"};
    bool carriage_flag{false};
    int i, j;

    cout << "Enter your really large number: ";
    getline(cin, number);

    if (number.size() < 6)
    {
        cout << "Wrong Entry." << endl;
    }
    else
    {
        new_number = number; 

        /* Perfrom the addition */
        for (i = number.size() - 1, j = added_number.size() - 1; i >= 0 ; --i, --j)
        {
            int digit = number[i] - '0';
            int added_digit = j >= 0 ? (added_number[j] - '0'): 0;
             int sum =  digit + added_digit;

            if(carriage_flag == true)
            {
                carriage_flag = false;
                sum += 1;
            }


            if(sum <= 9)
            {
                new_number[i] = sum + '0';
            }
            else 
            {
                new_number[i] = sum + '0' - 10;
                carriage_flag = true;
            }
        }

        /* Check for the carriage return flag */
        if(carriage_flag == true)
        {
            new_number = "1" + new_number;
        }



        cout << "New number after addition: " << new_number << endl;
    }
}   
