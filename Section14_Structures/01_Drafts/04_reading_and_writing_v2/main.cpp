/*
============================================================
 Task Title    : Reading and Writing v2
 Module        : Section 14 - Structures
 Author        : <Add author name>
 Created On    : <Add creation date>
 Draft Version : v0.1
============================================================
 Overview
 --------
 Briefly describe the purpose of this draft and the scenario
 it demonstrates.

 Key Notes
 ---------
 - Summarize any assumptions or prerequisites.
 - List the primary printing techniques showcased.
 - Mention any edge cases to be reviewed.

 Testing Checklist
 -----------------
[ ] Compile successfully with `g++ 01_print_strings.cpp -std=c++17`.
[ ] Verify console output matches expectations.
[ ] Document any deviations or follow-up actions.
------------------------------------------------------------
*/

/*============================================================
 File Inclusions
============================================================*/
#include <iostream>
#include <climits>

/*============================================================
 Used Namespaces
============================================================*/
using namespace std;
/*============================================================
 Type Definitions
============================================================*/

/*============================================================
 Local & Global Macros
============================================================*/

/*============================================================
 Function-like Macros
============================================================*/

/*============================================================
 Static Function Declarations
============================================================*/

/*============================================================
 Global Function Declarations
============================================================*/

/*============================================================
 Static Function Definitions
============================================================*/

/*============================================================
 Global Function Definitions
============================================================*/
/*============================================================
 File Inclusions
============================================================*/

struct employee
{
    string name;
    int age;
    double salary;
    char gender;
};
const int MAX{1000};
employee employees_array[1000]; /* Unlike C you can type employee without struct keyword before it */
int added{0};

void read_employee(employee &emp)
{
    cout << "Enter employee 4 entries: ";
    cin >> emp.name >> emp.age;
    cin >> emp.salary >> emp.gender;
}

void write_employee(const employee &emp)
{

    cout << emp.name << " has salary " << emp.salary << "\n";
}
void print_employees()
{
    for (int i = 0; i < added; ++i)
    {
        employee e = employees_array[i];

        cout << e.name << " has salary " << e.salary << endl;
    }
}
int main(int argc, char const *argv[])
{

    read_employee(employees_array[added++]);
    read_employee(employees_array[added++]);
    print_employees();

    return 0;
}
