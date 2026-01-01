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
 *     Our Own Queue
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <climits>
#include <algorithm>

/**********************************************************************************************************************
 *  USED NAMESPACES
 *********************************************************************************************************************/
using namespace std;

/**********************************************************************************************************************
 *  LOCAL & GLOBAL MACROS
 *********************************************************************************************************************/
#define MAX_QUEUE_LENGTH                100u

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/
struct my_queue
{
    int data[MAX_QUEUE_LENGTH];
    int length; 

    /* Define constructors */
    my_queue()
    {
        length = 0;
        for(int i = 0; i < MAX_QUEUE_LENGTH; ++i)
        {
            data[i] = 0;
        }
    }

    void add_end(int value)
    {
        if(length < MAX_QUEUE_LENGTH)
        {
            data[length] = value;
            ++length;
        }
    }

    void add_front(int value)
    {
        if (length < MAX_QUEUE_LENGTH)
        {
            ++length;
            for (int i = length - 1; i > 0; --i)
            {
                data[i] = data[i - 1];
            }
            data[0] = value;
        }
    }

    int remove_front(void)
    {
        if(length > 0)
        {
            int retVal = data[0];
            for (int i = 0; i < (length - 1); ++i)
            {
                data[i] = data[i + 1];
            }
            --length;
            return retVal;
        }
        return -1; // Return a sentinel value or handle error if queue is empty
    }

    void print()
    {
        for (int i = 0; i < length; ++i)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int main()
{
    my_queue q;
    q.add_end(10);
    q.add_end(20);
    q.add_front(5);
    q.print(); // Should output: 5 10 20

    cout << "Removed: " << q.remove_front() << endl; // Should output: 5
    q.print(); // Should output: 10 20

    return 0;
}
