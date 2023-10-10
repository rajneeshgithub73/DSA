#include <bits/stdc++.h>
using namespace std;

void passByValue(int a)
{
    a++;
}

void passByRefrence(int &b)
{
    b++;
}

int main()
{
    int a = 5;

    passByValue(a);

    int b = 10;

    passByRefrence(b);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}

//** Arrays by default pass by refrence hota hai