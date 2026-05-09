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
    //friend Pair operator+(const Pair &first, const Pair &second);
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
    return Pair(first.getFirst() + second.getFirst(), first.getSecond() + second.getSecond());
}

Pair operator-(const Pair &first, const Pair &second)
{
    return Pair(first.getFirst() - second.getFirst(), first.getSecond() - second.getSecond());
}

Pair operator*(const Pair &first, const Pair &second)
{
    return Pair(first.getFirst() * second.getFirst(), first.getSecond() * second.getSecond());
}

Pair operator/(const Pair &first, const Pair &second)
{
    if (second.getFirst() == 0 || second.getSecond() == 0) {
        cout << "Error: Division by zero!" << endl;
        exit(1);
    }
    return Pair(first.getFirst() / second.getFirst(), first.getSecond() / second.getSecond());
}

bool operator==(const Pair &first, const Pair &second)
{
    return first.getFirst() == second.getFirst() && first.getSecond() == second.getSecond();
}

bool operator!=(const Pair &first, const Pair &second)
{
    return !(first == second);
}
int main(void)
{
    Pair x(1,2);
    Pair y(3,4);


    Pair z; 
    z = x + y ; 

    cout << z.getFirst() << endl; 
    cout << z.getSecond() << endl;

    

}