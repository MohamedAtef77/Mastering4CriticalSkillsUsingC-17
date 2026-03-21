#pragma once

#include <iostream>
using namespace std; 

namespace OurSystem
{
    struct Employee
    {
        string name;

        Employee(string name_);
        void Print(void);
    };

    extern Employee *emp_glob;
}
