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
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
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
 ************************************************************************t********************************************/
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    vector<int> st; // use vector as stack

    for (int a : asteroids)
    {
        bool alive = true;

        while (alive && !st.empty() && st.back() > 0 && a < 0)
        {
            int top = st.back();

            if (abs(top) < abs(a))
            {
                st.pop_back(); // top explodes, keep checking
            }
            else if (abs(top) == abs(a))
            {
                st.pop_back(); // both explode
                alive = false;
            }
            else
            {
                alive = false; // current a explodes
            }
        }

        if (alive)
            st.push_back(a);
    }

    return st;
}
int main(void)
{
    vector<vector<int>> tests = {
        {5, 10, -5},
        {8, -8},
        {10, 2, -5},
        {-2, -1, 1, 2},
        {1, -2, -2, -2},
    };

    for (const auto &t : tests)
    {
        vector<int> input = t;
        vector<int> result = asteroidCollision(input);
        cout << "Input: ";
        for (int v : t)
            cout << v << " ";
        cout << "\nOutput: ";
        for (int v : result)
            cout << v << " ";
        cout << "\n---\n";
    }
}
