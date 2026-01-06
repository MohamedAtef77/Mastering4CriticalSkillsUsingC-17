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
int score_of_parenthesis(const string & s)
{
    stack<int> st; /* Stack to track scores at different nesting levels */
    st.push(0);    /* Base score for the outermost level */

    for(char c: s)
    {
        if(c == '(')
        {
            st.push(0); /* Start a new nesting level */
        }
        else 
        {
            int inner_score = st.top(); /* Get score of the level just closed */
            st.pop();                   /* Remove the closed level from stack */

            int calculated_val{0};
            if(inner_score == 0)
            {
                calculated_val = 1; /* Case: () - base score of 1 */
            }
            else 
            {
                calculated_val = 2 * inner_score; /* Case: (A) - double the inner score */
            }

            st.top() += calculated_val; /* Add score to the parent level (Case: AB) */
        }
    }

    return st.top(); /* Final accumulated score at the base level */
}
int main(int argc, char const *argv[])
{
    return 0;
}
