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

    bool freq_arr[1000]{

        true,  /* 0 */
        true,  /* 1 */
        true,  /* 2 */
        true,  /* 3 */
        false, /* 4 */
        false, /* 5 */
        true,  /* 6 */
        true,  /* 7 */
    };
    int seq[201]{0,1,3,6,2,7};
    int last_index{5};
    int index{0};
    int i{0};
    cout << "Enter the zero-based Recamán's sequence index: ";

    cin >> index; 

    for(i = last_index; i < index; ++i)
    {
        if(((seq[i] - i - 1) > 0) && (!freq_arr[(seq[i] - i - 1)]))
        {
            seq[i + 1] = (seq[i] - i - 1); 
        }
        else 
        {
            seq[i + 1] = (seq[i] + i + 1);
        }

        freq_arr[seq[i+1]] = true;
    }

    cout << "The term residing at this index is: " << seq[index] << endl;

}


