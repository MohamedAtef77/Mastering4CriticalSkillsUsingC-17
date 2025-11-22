/*
============================================================
 Task Title    : Find the most frequent number
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
    int freq_arr[771]{};
    int max_freq{0};
    int max_freq_index{0};
    cout << "Enter the number of elements: ";
    cin >> len;

    /* Get Data And Store Frequency */
    for(int i = 0; i < len; i++)
    {
        int temp{0};
        cin >> temp;

        if(temp >= -500 && temp <= 270)
        {
            freq_arr[temp + 500]++;
        }
    }

    /* Calculate the maximum frequency */
    max_freq = freq_arr[0];
    for(int i = 1; i < 771 ; i++)
    {
        if(freq_arr[i] > max_freq)
        {
            max_freq = freq_arr[i];
            max_freq_index = i;
        }
    }

    max_freq_index -= 500;

    cout << "The Maximum occurences are for element: " << max_freq_index << endl;
 
}


