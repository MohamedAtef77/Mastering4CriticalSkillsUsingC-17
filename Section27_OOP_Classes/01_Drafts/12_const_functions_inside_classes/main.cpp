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
#include <queue>
using namespace std;
/**********************************************************************************************************************
 *  GLOBAL CONSTANTS & VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/
class Rectangle
{
private:
    double height;
    double width;

public:
    Rectangle() : Rectangle(0.0, 0.0)
    {
    }

    Rectangle(double width, double height) : height(height), width(width)
    {
    }

    double getHeight() const
    {
        return height;
    }

    double getWidth() const
    {
        return width;
    }

    double getArea() const
    {
        return width * height;
    }

    double getPerimeter() const
    {
        return 2 * (width + height);
    }

    void print() const
    {
        cout << "Rectangle [width=" << width << ", height=" << height << "]" << endl;
        cout << "  Area      : " << getArea() << endl;
        cout << "  Perimeter : " << getPerimeter() << endl;
    }

    void setWidth(double w)
    {
        width = w;
    }

    void setHeight(double h)
    {
        height = h;
    }
};

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
int main(int argc, char const *argv[])
{
    Rectangle r1(5.0, 3.0);
    r1.print();

    const Rectangle r2(8.0, 4.0);
    r2.print(); // Only const functions can be called on a const object

    return 0;
}

