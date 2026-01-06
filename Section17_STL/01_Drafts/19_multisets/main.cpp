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
 *   DATE: 01/07/2026
 *
 *   PROJECT: C++ How To Program.
 *
 *   DESCRIPTION:
 *     An example discussing the usage of auto keyword.
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>


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
void print(const multiset<string> &v)
{
    // Iterate through the multiset and print each element.
    // Note: Elements in a std::multiset are always stored in sorted order.
    for(auto x: v)
    {
        cout << x << " ";
    }

    cout << endl;
}
int main(int argc, char const *argv[])
{
    // Declare a multiset of strings. std::multiset stores unique elements in a sorted manner.
    multiset<string> strmultiset;

    // Insert elements into the multiset.
    // Duplicates like "mostafa" are automatically ignored by the multiset.
    strmultiset.insert("ziad");
    strmultiset.insert("mostafa");
    strmultiset.insert("mostafa");
    strmultiset.insert("mostafa");
    strmultiset.insert("ali");

    print(strmultiset); // Output will be: ali mostafa ziad

    // count() returns 1 if the element exists, 0 otherwise.
    if (strmultiset.count("mostafa"))
    {

        cout << "Yes" << endl;
    }

    // find() returns an iterator to the element if found, or strmultiset.end() if not.
    auto it = strmultiset.find("ali"); 
    if(it != strmultiset.end())
    {
        cout << "Yes" << endl; 

        // Erase the element using the iterator.
        strmultiset.erase(it);
    }
    else 
    {
        cout << "No" << endl; 
    }

    print(strmultiset); // "ali" has been removed

    

    return 0;
}
