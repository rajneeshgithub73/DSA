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

    return 0;
}