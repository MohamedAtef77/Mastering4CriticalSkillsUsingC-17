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
 *     An example discussing the usage of const_iterator objects in a function which prints the contents of a dequeue.
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <deque>
#include <numeric> // For std::iota

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
void printDeque(const deque<int>& dq);

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DEFINITIONS
 *********************************************************************************************************************/
void printDeque(const deque<int>& dq) {
    cout << "Deque contents: ";
    for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int main(int argc, char const *argv[])
{
    deque<int> myDeque(5);
    // Fill the deque with values 0, 1, 2, 3, 4
    iota(myDeque.begin(), myDeque.end(), 0);

    // Call the function to print the deque
    printDeque(myDeque);

    // Demonstrate that a const_iterator cannot modify the deque elements
    // deque<int>::const_iterator it = myDeque.begin();
    // *it = 10; // This would cause a compilation error

    cout << "Attempting to modify deque through const_iterator would result in a compile error." << endl;

    return 0;
}
