/*
 * ********************************************************************************************************************
 *
 *   *****   *************************   **************   ***********************
 *  ******   *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  **       *************************   **************   ***********************
 *  **       *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  ******   ***                       **************   ***
 *   *****   ***                       **************   ***
 *
 * ********************************************************************************************************************
 *
 *   Copyright (c) 2021-2024, Sci-Fi Robotics Ltd.
 *   All rights reserved.
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the MIT License.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the MIT
 *   License for more details.
 *
 *   You should have received a copy of the MIT License along with
 *   this library; if not, write to info@scifi-robotics.com.
 *
 * ********************************************************************************************************************
 *
 *   AUTHOR: Your Name.
 *
 *   DATE: 12/21/2023
 *
 *   PROJECT: C++ How To Program.
 *
 *   DESCRIPTION:
 *     Demonstrates friend member functions: only specific member functions of
 *     class B are granted access to the private members of class A.
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
using namespace std;
/**********************************************************************************************************************
 *  GLOBAL CONSTANTS & VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/
class A;  // Forward declaration so B can reference A in its member functions

class B
{
public:
    void AccessA1(A& x);  // Only this member function is a friend of A
    void AccessA2(A& x);  // Only this member function is a friend of A
    void NotAFriend(A& x);  // This one is NOT a friend — cannot access privates
};

class A
{
private:
    int a1_private{10};
    int a2_private{20};
    void HiddenA(void)
    {
        cout << "I'm hidden" << endl;
    }

public:
    friend void B::AccessA1(A& x);  // Grant only AccessA1 of B
    friend void B::AccessA2(A& x);  // Grant only AccessA2 of B
};

/**********************************************************************************************************************
 *  LOCAL & GLOBAL MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DEFINITIONS
 *********************************************************************************************************************/
void B::AccessA1(A& x)
{
    cout << x.a1_private << endl;
    x.HiddenA();
}

void B::AccessA2(A& x)
{
    cout << x.a2_private << endl;
    x.HiddenA();
}

void B::NotAFriend(A& x)
{
    // cout << x.a1_private << endl;  // ERROR: not a friend — private access denied
    cout << "NotAFriend: cannot access A's private members" << endl;
}

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int main() {

    A a;
    B b;

    b.AccessA1(a);
    b.AccessA2(a);
    b.NotAFriend(a);

    return 0;
}
