/*
============================================================
 Task Title    : Flatten an array of any nesting level
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
    /* The array which takes the numbers of each dimension */
    int dimensions[100] {0 }; 
    int no_of_dims{0};
    int choice{0};
    int flattened_index{0};
    int indices[100]{0};

    cout << "Enter the number of dimentsions: ";
    cin >> no_of_dims;
    cout << "Enter the dimensions (spaced by zeros): ";
    for(int i = 0; i < no_of_dims; ++i)
    {
        cin >> dimensions[i];
    }

    cout << "Enter your choice: (1: 3D to 1D, 2: 1D to 3D): ";
    cin >> choice;

    if(choice == 1) /* Flatten into 1D array */
    {
        flattened_index = 0;
        cout << "Enter the indices (space separated)): ";
        for (int i = 0; i < no_of_dims; ++i)
        {
            cin >> indices[i];
        }

        for(int i = 0; i < no_of_dims; ++i)
        {
            int temp_mul = indices[i];
            for(int j = i + 1 ; j < no_of_dims; ++j)
            {
                temp_mul *=  dimensions[j];
            }

            flattened_index += temp_mul;

        }
        cout << "The 1D Array Index is: " << flattened_index << endl;
    }
    else if(choice == 2) /* Reshape the 1D index into to fit the nD array */
    {
        cout << "Enter the 1D Index: ";
        cin >> flattened_index;

        for (int i = 0; i < no_of_dims; ++i)
        {
            int temp_mul = 1;
            for (int j = i + 1; j < no_of_dims; ++j)
            {
                temp_mul *= dimensions[j];
            }

            indices[i] = flattened_index / temp_mul;
            flattened_index -= indices[i]  * temp_mul;
        }

        cout << "The n indices are: ";
        for(int i = 0; i < no_of_dims; ++i)
        {
            cout << indices[i] << " ";
        }
        cout << endl;
    }
}
