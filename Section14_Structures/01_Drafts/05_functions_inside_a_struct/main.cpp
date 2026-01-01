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
#include <algorithm>
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

    void read_employee(void)
    {
        cout << "Enter employee 4 entries: ";
        cin >> name >> age;
        cin >> salary >> gender;
    }

    void write_employee(void)
    {
        cout << name << " has salary " << salary << "\n";
    }

    void print_employee(void)
    {
        cout << name << " has salary " << salary << endl;
    }

    int get_age(void)
    {
        return age;
    }

    void set_age(int new_age)
    {
        age = new_age;
    }
};
const int MAX{1000};
employee employees_array[1000]; /* Unlike C you can type employee without struct keyword before it */
int added{0};


void print_employees()
{
    for (int i = 0; i < added; ++i)
    {
        employee e = employees_array[i];

        cout << e.name << " has salary " << e.salary << endl;
    }
}

bool compare_name(employee &a, employee &b)
{
    return a.name < b.name; // smaller name first
}

bool compare_salary(employee &a, employee &b)
{
    return a.salary > b.salary; // bigger salary salary
}

bool compare_name_salary(employee &a, employee &b)
{
    // smaller name first, if tie smaller salary
    if (a.name != b.name)
        return a.name < b.name;
    return a.salary < b.salary;
}

int main()
{
    int arr[5] = {5, 1, 3, 2, 4};
    sort(arr, arr + 5); // #include <algorithm>
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    employees_array[added++].read_employee();
    employees_array[added++].read_employee();
    employees_array[added++].read_employee();

    sort(employees_array, employees_array + added, compare_name);
    print_employees();

    sort(employees_array, employees_array + added, compare_salary);
    print_employees();

    sort(employees_array, employees_array + added, compare_name_salary);
    print_employees();

    return 0;
}
