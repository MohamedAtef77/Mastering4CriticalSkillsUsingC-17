#pragma once

#include "Employee.h" /* Normally Include it as this is one way dependency not circular */


struct Department
{
    /* data */
    string name; 

    vector<Employee> emps; /* This is a complete type, no problem with it now */

    void PrintDepartment(void);
};
