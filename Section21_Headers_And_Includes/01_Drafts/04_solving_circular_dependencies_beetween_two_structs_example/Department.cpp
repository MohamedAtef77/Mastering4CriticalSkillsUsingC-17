#include "Department..h"
#include <iostream>
using namespace std;

void Department::PrintDepartment(void)
{
    cout << "Department: " << name << "\n";
    for (Employee& emp : emps)
        emp.Print();
}
