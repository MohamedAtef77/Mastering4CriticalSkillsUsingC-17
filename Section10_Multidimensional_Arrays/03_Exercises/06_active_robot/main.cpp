/*
============================================================
 Task Title    : Active Robot
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
    int N{0};
    int M{0};
    int K{0};
    int dir{0};
    int steps{0};
    int i{0},j{0}, counter{0};
    int dir_vector_i[4] {-1,0,1,0};
    int dir_vectpr_j[4] {0,1,0,-1};
    


    /* Get the boundaries of the array */
    cout << "Enter N: "; 
    cin >> N;


    cout << "Enter M: ";
    cin >> M;


    /* Get the number of commands : */
    cout << "Enter K: ";
    cin >> K;


    for(counter = 0; counter < K; ++counter)
    {
        cout << "Enter the command direction (1: Up, 2: Right, 3: Down, 4: Left): ";
        cin >> dir;

        cout << "Enter the number of steps: ";
        cin >> steps;

        /* Decrement the direction once to make it fit the array */
        --dir;
        i += (dir_vector_i[dir] * steps);
        j += (dir_vectpr_j[dir] * steps);




        /* Check for circulation in the i direction */
        if(i < 0)
        {
            int no_of_cir = -1 * (i / N );
            i += (no_of_cir +1)  * N; 

        }
        else if(i > N)
        {
            i = i % N;
        }
        else 
        {
            /* Do Nothing */
        }


        /* Check for circulation in the j direction */
        if(j < 0)
        {
            int no_of_cir = -1 * (j / M);
            j += (no_of_cir + 1) * M;
        }
        else if(j > M)
        {
            j = j % M;
        }
        else 
        {
            /* Do Nothing */
        }

        /* Print the new coordinates */
        \
        cout << "Current i: " << i  << endl;
        cout << "Current j:  " << j << endl;




    }






}
