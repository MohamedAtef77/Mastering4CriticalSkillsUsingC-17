/*
============================================================
 Task Title    : Is a palindrome array 
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

bool isPalindromeArray(int arr[], int len)
{
    int start = 0; 
    int end = len - 1; 
    bool ret = false;


    while(start < end && arr[start] == arr[end])
    {
        start++;
        end--;
    }


    if(start >= end) /* The loop continued till the end of the arra from both sides */
    {
        ret = true;
    }

    return ret;

}
int read_arr(int arr[])
{
    int length{0};
    cout << "Enter the length of the array: ";
    cin >>  length; 

    cout << "Enter the elements of the array (spaced): "; 
    
    for(int i = 0; i < length; ++i)
    {
        cin >> arr[i];
    }

    return length > 100 ? -1 : length;  
}
int main(int argc, char const *argv[])
{
    int arr[100];
    int length{0};


    length = read_arr(arr);

    cout << isPalindromeArray(arr,length);


    /* code */
    return 0;
}
