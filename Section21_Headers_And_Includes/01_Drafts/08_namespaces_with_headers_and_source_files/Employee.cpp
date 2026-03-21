#include "Employee.h"

namespace OurSystem
{
    Employee *emp_glob = new Employee("Mohamed");

    Employee::Employee(string name_)
    {
        name = name_;
    }

    void Employee::Print(void)
    {
        cout << "I am " << name << endl; 
    }
}