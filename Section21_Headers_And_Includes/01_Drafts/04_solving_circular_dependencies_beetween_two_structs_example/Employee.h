#pragma once
#include <string>
#include <vector>


using namespace std;



/* Do not include the .h file */
struct Department;


struct Employee
{
    string name;
    vector<Department *> deps;
    Employee(string name_);
    void Print();
};