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
#include <deque>
#include <queue>
#include <stack>


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
void print_front(deque<int> &q)
{
    cout << "Queue Elements (Front): " << endl; 


    deque<int>::iterator it = q.begin(); /* You can use the auto keyword */

    while(it != q.end())
    {
        cout << *it << " ";
        ++it;
    }

    cout << endl; 
}
void print_back(deque<int> &q)
{
    cout << "Queue Elements (Back): " << endl;


    deque<int>::reverse_iterator it = q.rbegin();

    while (it != q.rend())
    {
        cout << *it << " ";
        ++it; /* Note that the iterator gets incremented */
    }

    cout << endl;
}
void print_back2(deque<int> &q)
{
    cout << "Queue Elements (Back): " << endl;

    for(auto it = q.rbegin(); it != q.rend(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}
 int main(int argc, char const *argv[])
{
    // Create a deque and populate it with some values
    deque<int> my_deque = {10, 20, 30, 40};

    // Verify print_front with initial values
    print_front(my_deque);

    // Add an element to the front and verify again
    my_deque.push_front(5);
    print_front(my_deque);

    print_back(my_deque); 

    print_back2(my_deque);



    return 0;
}
