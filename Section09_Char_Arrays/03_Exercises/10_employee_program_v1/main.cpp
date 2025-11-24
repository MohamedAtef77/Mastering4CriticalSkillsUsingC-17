/*
============================================================
 Task Title    : Employee Program V1
 Module        : Section 9 – Char Arrays
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
#include <limits>
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
int main(void)
{
    /* Defining Necessary Datas */
    int employees_count{0};
    string emp_names[200]{};
    double emp_salaries[200]{};
    int emp_ages[200]{};
    char emp_gender[200]{};
    int op_choice{0};

    while (true)
    {
        cout << "Enter your choice: " << endl;
        cout << "1) Add new employee " << endl;
        cout << "2) Print all employees  " << endl;
        cout << "3) Delete by age " << endl;
        cout << "4) Update Salary by name " << endl;

        cin >> op_choice; 

        if(op_choice == 1)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Name: ";
            getline(cin,emp_names[employees_count]);

            cout << "Enter Age: ";
            cin >> emp_ages[employees_count];

            cout << "Enter Salary: ";
            cin >> emp_salaries[employees_count];


            cout << "Enter Gender (M/F): ";
            cin >> emp_gender[employees_count];

            employees_count++;
        }
        else if(op_choice == 2)
        {
            /* Loop on employees data */
            for(int i = 0; i < employees_count; ++i)
            {
                cout << "Employee ID: " << i+1 << endl;
                cout << "Employee Name: " << emp_names[i] << endl;
                cout << "Employee Age: " << emp_ages[i] << endl;
                cout << "Employee Salary: " << emp_salaries[i] << endl;
                cout << "Employee GendeR: " << emp_gender[i] << endl;
            }
        }
        else if(op_choice == 3)
        {
            cout << "Enter Start and end ages (inclusively): "; 
            

            int start_age{0};
            int end_age{0};

            cin >> start_age >> end_age; 

            for(int i = 0; i < employees_count; ++i)
            {
                if(emp_ages[i] >= start_age && emp_ages[i] <= end_age)
                {
                    /* Remove from all records */
                    for(int j = i; j < employees_count - 1 ; ++j)
                    {
                        emp_names[j] = emp_names[j+1];
                        emp_salaries[j] = emp_salaries[j+1];
                        emp_ages[j] = emp_ages[j+1];
                        emp_gender[j] = emp_gender[j+1];
                    }


                    /* Decrement employees count ... this approac is memory efficient but time inefficient */
                    employees_count--;
                }
            }
        }
        else if(op_choice == 4)
        {
            string temp_name;
            double temp_sal{0.0};


            cout << "Enter the employee's name: ";
            
            cin >> temp_name;

            cout << "Enter the new salary: ";
            cin >> temp_sal;

            for(int i = 0; i < employees_count; ++i)
            {
                if(temp_name == emp_names[i])
                {
                    emp_salaries[i] = temp_sal;

                }
            }
        }

    }
}
