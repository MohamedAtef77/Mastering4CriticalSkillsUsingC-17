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
 *     A brief description of the program.
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <queue>
#include <bits/stdc++.h>


using namespace std;
/**********************************************************************************************************************
 *  GLOBAL CONSTANTS & VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL & GLOBAL MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DEFINITIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int vector_sum(const vector<int> &st)
{
    int sum{0};
    for(const auto &value : st)
    {
        sum += value;

    }

    return sum; 
}
int find_stacks_max_sum(vector<int> &st1, vector<int> &st2, vector<int> &st3)
{
    /* Find the stack which has the max sum*/
    int sum1 = vector_sum(st1);
    int sum2 = vector_sum(st2);
    int sum3 = vector_sum(st3);


    while(!st1.empty() && !st2.empty() && !st3.empty()) /* Loop until one of the stacks gets emptied */
    {
        if (sum1 == sum2 && sum2 == sum3)
            return sum1;

        /* Find the maximum of the sum of each stacks */
        if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1.back();

            st1.pop_back();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.back();
            st2.pop_back();
        }
        else
        {

            sum3 -= st3.back();
            st3.pop_back();
        }
    }
    return 0;
}
 int main(int argc, char const *argv[])
 {
    // Test Case 1: Standard case where a common sum (5) exists
    // Note: We assume the back of the vector is the "top" of the stack
    vector<int> s1{1, 1, 1, 2, 3}; // Sum 8
    vector<int> s2{2, 3, 4};       // Sum 9
    vector<int> s3{1, 4, 1, 1};    // Sum 7
    
    cout << "Test 1 - Expected: 5, Result: " << find_stacks_max_sum(s1, s2, s3) << endl;

    // Test Case 2: No common sum exists (should return 0)
    vector<int> s4{10};
    vector<int> s5{1, 1};
    vector<int> s6{1};
    cout << "Test 2 - Expected: 0, Result: " << find_stacks_max_sum(s4, s5, s6) << endl;

    // Test Case 3: Stacks already equal
    vector<int> s7{3, 3};
    vector<int> s8{3, 3};
    vector<int> s9{3, 3};
    cout << "Test 3 - Expected: 6, Result: " << find_stacks_max_sum(s7, s8, s9) << endl;

    return 0;
 }
 