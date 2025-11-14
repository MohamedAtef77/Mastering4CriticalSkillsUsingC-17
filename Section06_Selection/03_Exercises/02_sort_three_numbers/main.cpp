/*
============================================================
 Task Title    : sort three numbers without loops
 Module        : Section 06 – Selection
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
    int num1{0};
    int num2{0};
    int num3{0};
    int temp{0};


    cout << "Enter the first number: ";
    cin >> num1; 

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if(num1 > num2)
    {
        /* Swap to maintain correct order */
        temp = num1; 
        num1 = num2;
        num2 = temp;
    }


    if(num2 > num3)
    {
        /* Swap to maintain correct order */
        temp = num2; 
        num2 = num3;
        num3 = temp;       
    }

    if(num1 > num2)
    {
        /* Swap again to maintain correct order */
        temp = num1; 
        num1 = num2;
        num2 = temp;
    }

    cout << num1 << " " << num2 << " " << num3 << endl;

}   

/* 
My Solution: I got triggered by the permutation hint :) 
*/
#if 0
int main(void)
{
    int num1{0};
    int num2{0};
    int num3{0};

    int min{0},mid{0},max{0};


    cout << "Enter the first number: ";
    cin >> num1; 

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if((num1 <= num2) && (num2 <= num3))
    {
        min = num1;
        mid = num2;
        max = num3;
    }
    else if ((num1 <= num3) && (num3 <= num2))
    {
        min = num1; 
        mid = num3;
        max = num2; 
    }
    else if((num3 <= num1) && (num1 <= num2))
    {
        min = num3;
        mid = num1;
        max = num2;
    }
    else if((num2 <= num1) &&(num1 <= num3))
    {
        min = num2; 
        mid = num1;
        max = num3;
    }
    else if((num3 <= num2) && (num2 <= num1))
    {
        min = num3;
        mid = num2; 
        max = num1;
    }
    else if((num2 <= num3) && (num3 <= num1))
    {
        min = num2;
        mid = num3; 
        max = num1;
    }

    cout << min << " " << mid << " " << max << endl;


}   
#endif
/*
    AI REVISED: 
*/
#if 0
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int min, mid, max;

    // Case 1: a is the smallest
    if (a <= b && a <= c) {
        min = a;
        if (b <= c) { mid = b; max = c; }
        else        { mid = c; max = b; }
    }
    // Case 2: b is the smallest
    else if (b <= a && b <= c) {
        min = b;
        if (a <= c) { mid = a; max = c; }
        else        { mid = c; max = a; }
    }
    // Case 3: c is the smallest
    else {
        min = c;
        if (a <= b) { mid = a; max = b; }
        else        { mid = b; max = a; }
    }

    cout << min << " " << mid << " " << max << endl;
    return 0;
}

#endif