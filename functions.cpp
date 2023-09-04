#include <bits/stdc++.h>
using namespace std;

// Functions : a block of code / sub-program that is linked to a well-defined task.

// syntax of function :
//  return_type function_name(parameters){

// }

void printName(string name, int times);
int addNumbers(int a, int b);
void fun();
void printSumOfThreeNumbers(int a, int b, int c);
int sumOfThreeNumbers(int a, int b, int c);
int findMaxOfThree(int a, int b, int c);
void countOneToN(int n);
void checkEvenOrOdd(int n);
void sumUptoN(int n);

int main()
{
    // printName("Rajneesh", 5);
    // printName("Hello World", 15);
    // printName("babbar", 10);

    // cout << addNumbers(5, 3);

    // fun();

    // printSumOfThreeNumbers(2, 3, 5);

    // int answer = sumOfThreeNumbers(5, 6, 4);

    // cout << answer << endl;

    // cout << findMaxOfThree(4, 8, 7) << endl;

    // countOneToN(10);

    // checkEvenOrOdd(5);

    // sumUptoN(15);

    return 0;
}

void printName(string name, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << name << endl;
    }
}

int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}

void fun()
{
    cout << "fun";
    return;
}

void printSumOfThreeNumbers(int a, int b, int c)
{
    int sum = a + b + c;
    cout << sum << endl;
}

int sumOfThreeNumbers(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

// int findMaxOfThree(int a, int b, int c){
//     if(a>b){
//         if(a>c){
//             return a;
//         }else{
//             return c;
//         }
//     }else{
//         if(b>c){
//             return b;
//         }else{
//             return c;
//         }
//     }
// }

int findMaxOfThree(int a, int b, int c)
{
    int maxi = max(a, max(b, c));
    return maxi;
}

void countOneToN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

void checkEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " : even number" << endl;
    }
    else
    {
        cout << n << " : odd number" << endl;
    }
}

void sumUptoN(int n)
{
    int sum = (n * (n + 1)) / 2;
    cout << "sum : " << sum << endl;
}
