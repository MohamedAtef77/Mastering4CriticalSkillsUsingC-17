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
#include <map>
#include <set>
#include <stack>
#include <vector>


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
bool isValid(const string & str)
{
    map<char,char> ch_mapping;

    ch_mapping['['] = ']';
    ch_mapping['{'] = '}';
    ch_mapping['('] = ')';

    set<char> end_chars{']','}',')'};


    stack<char> remaining_chars;

    for(auto &ch: str)
    {
        /* Check if the character the start of braces */
        if(ch_mapping.find(ch) != ch_mapping.end())
        {
            remaining_chars.push(ch);
        }
        else if (end_chars.find(ch) != end_chars.end()) /* Check if it is the end of a patter */
        {
            if(remaining_chars.empty())
            {
                return false; /* The stack is empty and the start of it is an ending pattern */
            }
            else 
            {
                if(ch_mapping[remaining_chars.top()] == ch)
                {
                    remaining_chars.pop();
                }
                
            }
        }
        else /* Pattern violation */
        {
            return false; 
        }
    }

    return remaining_chars.empty();
    
}
int main(int argc, char const *argv[])
{
    /* code */

    cout << isValid("()") << endl; 
    cout << isValid("()()") << endl; 
    
    return 0;
}
