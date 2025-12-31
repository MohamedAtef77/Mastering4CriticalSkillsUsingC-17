/*
============================================================
 Task Title    : Get nth prime 
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
bool isPrime(int n)
{
    bool retVal = true; 
    if(n <= 1)
    {
        retVal = false; 
    }
    else
    {
        for(int i = 2; i < n; ++i)
        {
            if( n % i == 0)
            {
                retVal = false;
                break;
            }
        }
    }


    return retVal; 

}
int getNthPrime(int no_terms)
{
    int i = 0; 
    int result; 

    while((i < INT_MAX) && no_terms > 0)
    {
        
        if(isPrime(i))
        {
            result = i;
            no_terms--;
        }

        ++i;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    /* code */

    cout << getNthPrime(6) << endl;
    cout << getNthPrime(2) << endl; 
    
    return 0;
}
