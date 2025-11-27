#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

bool in_bounds(int r, int c, int n)
{
    return r >= 0 && r < n && c >= 0 && c < n;
}

bool has_winning_line(const char grid[][MAX_SIZE], int n, char symbol)
{
    // Check only unique directions (right, down, diag-down-right, diag-down-left).
    const int dir[4][2] = {{0, 1}, {1, 0}, {1, 1}, {1, -1}};

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            if (grid[r][c] != symbol)
            {
                continue;
            }

            for (const auto &d : dir)
            {
                int count = 1;
                int nr = r + d[0];
                int nc = c + d[1];

                while (count < n && in_bounds(nr, nc, n) && grid[nr][nc] == symbol)
                {
                    ++count;
                    nr += d[0];
                    nc += d[1];
                }

                if (count == n)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    char grid[MAX_SIZE][MAX_SIZE]{{0}};
    int n = 0;

    cout << "Enter the number of rows / columns (max " << MAX_SIZE << "): ";
    if (!(cin >> n) || n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid board size." << endl;
        return 0;
    }

    int moves = 0;
    bool x_turn = true;
    const int max_moves = n * n;

    while (moves < max_moves)
    {
        char symbol = x_turn ? 'x' : 'o';
        cout << "Enter the indices for '" << symbol << "' (row column): ";

        int i = 0;
        int j = 0;
        if (!(cin >> i >> j))
        {
            cout << "Invalid input. Exiting." << endl;
            return 0;
        }

        if (!in_bounds(i, j, n))
        {
            cout << "Indices out of range. Try again." << endl;
            continue;
        }

        if (grid[i][j] != 0)
        {
            cout << "Cell already occupied. Try again." << endl;
            continue;
        }

        grid[i][j] = symbol;
        ++moves;

        if (has_winning_line(grid, n, symbol))
        {
            cout << (x_turn ? "The first player wins!!!" : "The second player wins!!!") << endl;
            return 0;
        }

        x_turn = !x_turn;
    }

    cout << "It's a draw." << endl;
    return 0;
}
