// xor : same value output will be 0, and if different then output will be 1.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << (a & b) << endl;

    cout << (a | b) << endl;

    int num = 1;
    cout << ~num << endl;
    cout << ~(num) << endl;
    cout << (~num) << endl;

    bool num1 = 1;
    cout << ~num1 << endl;
    cout << ~(num1) << endl;
    cout << (~num1) << endl;

    a = 5;
    b = 10;
    cout << (a ^ b) << endl;

    a = 5;
    b = -5;
    cout << (a ^ b) << endl;

    // left and right sift operators
    // used on the time of bitmasking

    //"<<" -> left shift
    //">>" -> right shift

    a = 2;
    cout << (a << 1) << endl;

    a = 5;
    cout << (a << 2) << endl;

    a = 7;
    cout << (a << 5) << endl;

    // right shift
    a = 2;
    cout << (a >> 1) << endl;

    a = 100;
    cout << (a >> 2) << endl;

    a = 7;
    cout << (a >> 1) << endl;

    unsigned int m = -100;
    cout << (m >> 1) << endl;

    int n = 10;
    // cout << (n << -1) << endl;

    // pre/post inc/dec operator
    // preincrement, postincrement, predecrement, postdecrement

    a = 5;
    cout << (++a) << endl;
    cout << (a++) << endl;
    cout << (a) << endl;

    a = 21;
    cout << (++a) << endl;
    cout << (a++) << endl;
    cout << (a) << endl;

    a = 10;
    cout << ((++a) * (a++)) << endl;

    a = 10;
    cout << ((a++) * (++a)) << endl;

    return 0;
}