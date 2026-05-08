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
class Shape 
{
    public:
    Shape()
    {
        /* Default constructor */
    }
    virtual double getArea(void)
    {
        return 0.0;
    }
};
class Square: public Shape
{
    public:
    double length; 
    Square(double length): length(length) 
    {

    }
    double getArea(void)
    {
        return length * length; 
    }
};

class Rectangle: public Shape
{
    public:
    double width;
    double height;
    Rectangle(double width, double height): width(width), height(height)
    {

    }
    double getArea(void)
    {
        return width * height;
    }
};

class Triangle: public Shape
{
    public:
    double base;
    double height;
    Triangle(double base, double height): base(base), height(height)
    {

    }
    double getArea(void)
    {
        return 0.5 * base * height;
    }
};

class Circle: public Shape
{
    public:
    double radius;
    Circle(double radius): radius(radius)
    {

    }
    double getArea(void)
    {
        return 3.141592653589793 * radius * radius;
    }
};

class Parallelogram: public Shape
{
    public:
    double base;
    double height;
    Parallelogram(double base, double height): base(base), height(height)
    {

    }
    double getArea(void)
    {
        return base * height;
    }
};

int main(void)
{
    vector<Shape *> shapes; 


    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(3.0, 4.0));
    shapes.push_back(new Triangle(6.0, 8.0));

    for(Shape *s : shapes)
    {
        cout << s->getArea() << endl; 
    }
}