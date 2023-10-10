#include <bits/stdc++.h>
using namespace std;

//lovebabber3@gmail.com

// bool isPrime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(nums[start], nums[end]);
//         start++;
//         end--;
//     }

//     return nums;
// }

// bool isPalindrome(string &str)
// {
//     int start = 0;
//     int end = str.length() - 1;
//     while (start <= end)
//     {
//         if (str[start] != str[end])
//             return false;
//         start++;
//         end--;
//     }
//     return true;
// }

// vector<int> countFrequency(int n, int x, vector<int> &nums)
// {
//     vector<int> answer(n, 0);

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] <= n)
//             answer[nums[i] - 1]++;
//     }
//     return answer;
// }

// void findUniqueElement()
// {
//     int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};

//     int answer = 0;
//     for (auto i : arr)
//     {
//         answer ^= i;
//     }
//     cout << answer << endl;
// }

// void printAllPairs()
// {
//     int arr[] = {10, 20, 30};
//     for (auto i : arr)
//     {
//         for (auto j : arr)
//         {
//             cout << "(" << i << "," << j << ")" << endl;
//         }
//     }
// }

// void sortzeroandones(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         if (arr[s] == 1 && arr[e] == 0)
//         {
//             swap(arr[s], arr[e]);
//             s++;
//             e--;
//         }
//         else if (arr[s] == 1 && arr[e] == 1)
//         {
//             e--;
//         }
//         else if (arr[s] == 0 && arr[e] == 0)
//         {
//             s++;
//         }else{
//             s++;
//             e--;
//         }
//     }
// }

bool linearSearch2Darray(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] == target)
                return true;

    return false;
}
void printarr(int arr[][3], int row, int col)
{
    // row wise
    cout << "row wise" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // column wise
    cout << "column wise" << endl;
    for (int c = 0; c < col; c++)
    {
        for (int r = 0; r < row; r++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
}

void rowwisesum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << i + 1 << " : " << sum << endl;
        sum = 0;
    }
}

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void practice()
{
    // int arr[3][3];

    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // int crr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // atleast specify column

    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {5, 6, 7},
    //     {9, 10, 11}};

    // printarr(arr, 3, 4);
    // cout << linearSearch2Darray(arr, 3, 4, 11) << endl;
    // printarr(arr, 3, 3);
    // transpose(arr, 3, 3);
    // printarr(arr, 3, 3);

}

int main()
{
    // findUniqueElement();

    // printAllPairs();

    // int n = 6;
    // int arr[6] = {1, 0, 1, 0, 1, 0};
    // sortzeroandones(arr, n);
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }

    practice();

    return 0;
}
