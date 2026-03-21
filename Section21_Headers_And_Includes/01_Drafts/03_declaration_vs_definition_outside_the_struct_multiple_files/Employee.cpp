#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name_)
{
    name = name_;
}

void Employee::Print()
{
    cout << "I am " << name << "\n";
}