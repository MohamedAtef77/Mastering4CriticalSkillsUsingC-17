/*
============================================================
 Task Title    : Find Mountains 
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
    int ROWS{0}, COLS{0};
    int arr[100][100];
    int i_moves[8] = {0,-1,-1,-1,0,1,1,1};
    int j_moves[8] = {-1,-1,0,1,1,1,0,-1};

    cout << "Enter the number of rows: ";
    cin >> ROWS; 

    cout << "Enter the number of columns: ";
    cin >> COLS;

    /* Take Inputs */
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS; ++j)
        {
            cin >> arr[i][j];
        }
    
    }

    /* Check if a mountain or not */
    for(int i = 0 ; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS ; ++j)
        {
            bool isMountain = true;
            for(int k = 0; k < 8; ++k)
            {
                int moved_i = i + i_moves[k];
                int moved_j = j + j_moves[k];

                if(moved_i >= 0 && moved_i < ROWS && moved_j >= 0 && moved_j < COLS)
                {
                    /* The move is within the horizontal and vertical ranges of the array */
                    if(arr[moved_i][moved_j] > arr[i][j])
                    {
                        isMountain = false;
                    }
                }
            }
            if(isMountain == true)
            {
                cout << i << " " << j << endl;

            }
        }
    }

}
