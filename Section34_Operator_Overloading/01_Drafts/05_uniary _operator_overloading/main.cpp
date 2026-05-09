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
class Pair
{
    private:
    double first;
    double second; 

    public:
    friend Pair operator+(const Pair &first, const Pair &second);
    friend Pair operator!(const Pair &first);
    Pair()
    {

    }
    Pair(double first, double second): first(first), second(second)
    {

    }
    void setFirst(double first)
    {
        this->first = first;
    }

    double getFirst() const
    {
        return first;
    }

    void setSecond(double second)
    {
        this->second = second;
    }

    double getSecond() const
    {
        return second;
    }
};


Pair operator+(const Pair &first, const Pair &second)
{
    return Pair(first.first + second.first, first.second + second.second);
}
Pair operator!(const Pair &first)
{
    return Pair(first.first == 0 ? 1 : 0, first.second == 0 ? 1 : 0);
}
int main(void)
{
    Pair x(1,2);
    Pair y(3,4);


    Pair z; 
    z = x + y ; 

    cout << z.getFirst() << endl; 
    cout << z.getSecond() << endl;

    Pair a(0, 5.5);
    Pair b = !a;

    cout << "a: (" << a.getFirst() << ", " << a.getSecond() << ")" << endl;
    cout << "!a: (" << b.getFirst() << ", " << b.getSecond() << ")" << endl;

    return 0;
}