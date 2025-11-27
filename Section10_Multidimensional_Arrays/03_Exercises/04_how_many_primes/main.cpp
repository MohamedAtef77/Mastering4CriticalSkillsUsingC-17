/*
============================================================
 Task Title    : How many primes ?
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

static bool isPrimeGrid[100][100] = {false};

int main()
{
    int ROWS{0}, COLS{0}, value{0};

    cin >> ROWS >> COLS;

    /* Input + prime precomputation */
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cin >> value;
            bool isPrimeValue = value > 1;

            for (int d = 2; d * d <= value && isPrimeValue; ++d) /* The root hack */
                if (value % d == 0)
                    isPrimeValue = false;

            isPrimeGrid[i][j] = isPrimeValue;
        }
    }

    int Q{0};
    cin >> Q;

    while (Q--)
    {
        int start_i{0}, start_j{0}, rows{0}, cols{0};
        int primeCount{0};

        cin >> start_i >> start_j >> rows >> cols;

        for (int i = start_i; i < start_i + rows; ++i)
        {
            for (int j = start_j; j < start_j + cols; ++j)
            {
                primeCount += isPrimeGrid[i][j];
            }
        }

        cout << primeCount << '\n';
    }

    return 0;
}
