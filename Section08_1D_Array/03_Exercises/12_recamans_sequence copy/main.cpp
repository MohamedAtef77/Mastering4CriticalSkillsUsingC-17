/*
============================================================
 Task Title    : Sort Numbers (The input range is the trick)
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
    int len{0};
    int freq_arr[501]{};
    int max_freq_index{0};

    cout << "Enter the number of elements: ";
    cin >> len;

    cout << "Enter the elements (spaced): ";
    
    /* Get Data And Store Frequency */
    for(int i = 0; i < len; i++)
    {
        int temp;
        cin >> temp; 
        if(temp >= 0 && temp <= 500)
        {
            freq_arr[temp]++;
        }
        

    }

    /* Print them as if they were sorted */
    for(int i = 0; i <= 500; i++)
    {
        for(int j = 0; j < freq_arr[i]; j++)
        {
            cout << i << " ";
        }
    }
    cout << endl;

 
}


