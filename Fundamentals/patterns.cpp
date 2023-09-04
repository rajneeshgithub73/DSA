#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    int col;

    // pattern 1

    //         *
    //       *   *
    //     *   *   *
    //   *   *   *   *
    // *   *   *   *   *

    row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*   ";
        }
        cout << endl;
    }

    // pattern 2

    //   *   *   *   *   *   *   *
    //     *   *   *   *   *   *
    //       *   *   *   *   *
    //         *   *   *   *
    //           *   *   *
    //             *   *
    //               *

    row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < row - i; j++)
        {
            cout << "*   ";
        }
        cout << endl;
    }

    // pattern 3

    //         *
    //       *   *
    //     *       *
    //   *           *
    // *               *

    row = 6;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i + 1 - 1)
            {
                cout << "*   ";
            }
            else
            {
                cout << "    ";
            }
        }
        cout << endl;
    }

    // pattern 4

    // *                   *
    //   *               *
    //     *           *
    //       *       *
    //         *   *
    //           *

    row = 6;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < row - i; j++)
        {
            if (j == 0 || j == row - i - 1)
            {
                cout << "*   ";
            }
            else
            {
                cout << "    ";
            }
        }
        cout << endl;
    }

    // pattern 5

    // 1
    // 2 * 2
    // 3 * 3 * 3
    // 4 * 4 * 4 * 4
    // 5 * 5 * 5 * 5 * 5

    row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << " * " << i + 1;
            }
        }
        cout << endl;
    }

    cout << endl;

    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *

    row = 10;

    for (int r = 0; r < row; r++)
    {
        if (r < 5)
        {
            for (int c = 0; c <= r; c++)
            {
                cout << "* ";
            }
            for (int c = 0; c < row - 2 * r - 2; c++)
            {
                cout << "  ";
            }
            for (int c = 0; c <= r; c++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int c = 0; c < row - r; c++)
            {
                cout << "* ";
            }
            for (int c = 0; c < 2 * r - row; c++)
            {
                cout << "  ";
            }
            for (int c = 0; c < row - r; c++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    cout << endl;

    // Hollow Rectangle
    // * * * * * * * * * *
    // *                 *
    // *                 *
    // *                 *
    // * * * * * * * * * *

    row = 5;
    col = 10;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (r == 0 || r == row - 1)
            {
                cout << "* ";
            }
            else if (c == 0 || c == col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    
    return 0;
}