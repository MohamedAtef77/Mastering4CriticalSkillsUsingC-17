/*
============================================================
 Task Title    : Josephus Problem 
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
/*
============================================================
 Task Title    : Count Increasing Sub-arrays (Refactored)
 Key Improvements:
 - Fixes N=1 bug.
 - Removes complex state flags (is_last_op_decline).
 - Uses cumulative counting logic.
============================================================
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n{0};
    int k{0};
    int players_left{0};
    bool is_eliminated[200]{false};
    int curr_player_index{0};
    int k_counter{0};

    cout << "Enter N: ";
    cin >> n;

    
    
    cout << "Enter K: ";
    cin >> k;
    
    players_left = n; 

    cout << "People removed in order: ";
    while(players_left > 0)
    {

        if (is_eliminated[curr_player_index] == false)
        {
            k_counter++;
            if (k_counter == k) /* Time for elimination */
            {
                k_counter = 0;
                is_eliminated[curr_player_index] = true;
                players_left--;

                cout << curr_player_index + 1 << " ";


            }
        }

        /* Move index to the adjacent player*/
        curr_player_index = (curr_player_index + 1) % n;
    }






    return 0;
}
