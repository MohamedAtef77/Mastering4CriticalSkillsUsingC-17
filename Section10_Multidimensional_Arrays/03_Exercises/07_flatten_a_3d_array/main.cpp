/*
============================================================
 Task Title    : Flatten 3D Array 
 Module        : Section 10 – Multidimensional Arrays
 Author        : <Add author name>
 Created On    : <Add creation date>
 Draft Version : v0.2
============================================================
 Overview
 --------
 Count prime numbers inside submatrices of a 2D grid.
 Prime detection is performed once during input acquisition
 to avoid recomputation per query.

 Key Notes
 ---------
 - Prime check is done only once per cell.
 - Queries operate on a precomputed boolean grid.
 - Nested loops still exist, but not inside prime logic.

============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int DEPTH{0},ROWS{0},COLS{0};
    int choice{0};
    int d{0},r{0},c{0}, k{0};

    cout << "Enter the Dimensions of the 3D array, Separated by white spaces: ";
    cin >> DEPTH >> ROWS >> COLS;


    cout << "Enter your choice: (1: 3D to 1D, 2: 1D to 3D): ";
    cin >> choice; 

    if(choice == 1 )
    {
        cout << "Enter depth: "; 
        cin >> d; 

        cout << "Enter rows: ";
        cin >> r; 

        cout << "Enter columns: ";
        cin >> c;


        k = d * ROWS * COLS + r * COLS + c;
        cout << "The 1D Array Index is: " << k << endl;

        
    }  
    else if(choice == 2)
    {
        cout << "Enter the 1D Array Index: ";
        cin >> k; 

        d = k / (ROWS * COLS);
        r = (k - (d * (ROWS * COLS))) / COLS;
        c = (k - (d *ROWS * COLS) - (r * COLS));

        cout << "d = " << d << " r = " << r << "c = " << c << endl;
    }
    else 
    {
        /* Do Nothing */
    }
    




}
