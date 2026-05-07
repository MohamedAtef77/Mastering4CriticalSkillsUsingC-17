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

 class Person 
 {
    protected:
        string name; 
        string email; 
        int birthYear; 
    public:
        Person(string name, string email, int birthYear)
        {
            this->name = name;
            this->email = email;
            this->birthYear = birthYear;
        }
        string getName()
        {
            return name;
        }
 };


 class Student: public Person
 {
    public:
    double gpa; 

    Student(string name, string email, int birthYear, double gpa)
        : Person(name, email, birthYear)
    {
        this->gpa = gpa;
    }

    void printGrades(void)
    {
        cout << gpa << endl; 
    }

    void printStudentInfo(void)
    {
        // Accessing protected members directly from the base class
        cout << "Name: " << name << "\nEmail: " << email 
             << "\nBirth Year: " << birthYear << "\nGPA: " << gpa << endl;
    }

 };

int main(void)
{
    // Instantiate a student and test the functionality
    Student student("John Doe", "john.doe@example.com", 2002, 3.8);
    student.printStudentInfo();
    
    return 0;
}