#include <bits/stdc++.h>
using namespace std;

int decimaltobinary_divisionmethod(int decimalNumber)
{
    int binaryNumber = 0;
    int i = 1;
    while (decimalNumber > 0)
    {
        int bit = decimalNumber % 2;
        binaryNumber += bit * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}

int decimaltobinary_shiftmethod(int decimalNumber)
{
    int binaryNumber = 0;
    int i = 1;
    while (decimalNumber > 0)
    {
        int bit = (decimalNumber & 1);
        binaryNumber += bit * i;
        decimalNumber >>= 1;
        i *= 10;
    }
    return binaryNumber;
}

int main()
{

    int decimalNumber;
    cin >> decimalNumber;
    int binaryNumber = decimaltobinary_shiftmethod(decimalNumber);
    cout << binaryNumber;

    return 0;
}