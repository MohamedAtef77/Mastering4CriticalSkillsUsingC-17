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
 *     correct the following
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include<stream  /* Correction: #include <iostream> */

/**********************************************************************************************************************
 *  USED NAMESPACES
 *********************************************************************************************************************/
using namespace STD /* using namespace std;*/

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int maIN() { /* The spelling of 'main' is wrong */

    cout <<"work_smart_not_hard\n"; /* You can't make line code without an outer function */
    cout << "Children must be taught how to think, not what to think" /* Missing Semi Column*/
    cout << "We worry about what a child will become "tomorrow", yet we forget that he is someone today\n"; /*Usage of "" without \*/
    cout << "Children are not things to be molded"<", but are people to be unfolded\n"; /* single < is not an output operator */
    cout << "Each day of our lives we make deposits in the memory banks of our children."<end;  /* single < is not an output operator */
    cout  << ""It is easier to build strong children than to repair broken men""<<"\n"; /* Usage of double quotes twice */
    cout >> "Children need models rather than critics\n"; /* Using insertion operator instead of output operator */
    out<<"Children have never been very good at listening to their elders, but they have never failed to imitate them"; /* Using out instead of cout */
    cout < "Children are our most valuable resource\n"; /* Single < is not an output operator */

    return 0;
}
