#include <bits/stdc++.h>
using namespace std;

int main()
{

    // pattern 1

    //         *
    //       *   *
    //     *   *   *
    //   *   *   *   *
    // *   *   *   *   *

    int row = 5;

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

    return 0;
}