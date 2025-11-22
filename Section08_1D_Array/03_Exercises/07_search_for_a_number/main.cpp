/*
============================================================
 Task Title    : Search for a number
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
    int arr_size{0};
    const int max_arr_size{501};
    int indices[max_arr_size]{};
    int queries[200]{};
    int q{},i{},num{};

    /* Read Input Data */
    cout << "Enter the number of elements: ";
    cin >> num;

    cout << "Enter the elements (spaced): ";
    for(i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;

        if((temp >= 0) && (temp <= 500))
        {
            indices[temp] = i;
        }

    }

    /* Read The Queries */
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter the queries (spaced): ";
    for(i = 0; i < q; i++)
    {
        cin >> queries[i];
    }


    /* Respond to the queries */
    for(i = 0; i < q; i++)
    {
        if(indices[queries[i]])
        {
            cout << indices[queries[i]] << " ";
        }
        else 
        {
            cout << "-1 ";
        }
    }
    cout << endl;
 
}


