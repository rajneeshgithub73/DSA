#include <bits/stdc++.h>
using namespace std;

int binarysearch(int array[], int size, int key){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int binarySearch(vector<int> array, int key){
    int left = 0;
    int right = array.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
}
//function to find first occurrence of key in array

int firstOccurrence(int array[], int size, int key){
    int left = 0;
    int right = size - 1;
    int ans=-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == key){
            ans = mid;
            right = mid-1;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}

//function to find last occurrence of key in array

int lastOccurrence(int array[], int size, int key){
    int left = 0;
    int right = size - 1;
    int ans=-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == key){
            ans = mid;
            left = mid+1;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}

//find total occurrence of key in array

int totalOccurrence(int array[], int size, int key){
    int indexOfFirstOccurrence, indexOfLastOccurrence;
    indexOfFirstOccurrence = firstOccurrence(array, size, key);
    indexOfLastOccurrence = lastOccurrence(array, size, key);
    return indexOfLastOccurrence - indexOfFirstOccurrence + 1;
}

//find missing element in an sorted array

int missingKey(int array[], int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(left == size-1){
            return left+2;
        }
        if(left == right){
            return left+1;
        }
        else if(array[mid] == mid + 1){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return -1;
}

//find pead index in an mountain array ,leetcode 852

int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[mid+1]){
            right = mid;
        }
        else if(arr[mid] < arr[mid+1]){
            left = mid+1;
        }
    }
    return left;
}

//find pivot element in an array ,leetcode

int pivotIndexInRotatedArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        if(left == right) return left;
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[mid+1]){
            return mid;
        }else if(arr[mid] < arr[mid-1]){
            return mid-1;
        }else if(arr[mid] > arr[0]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

//search element in rotated sorted array

int binarySearch(vector<int> array, int key, int left, int right){
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int search(vector<int>& nums, int target) {
    int pivotIndex = pivotIndexInRotatedArray(nums);

    int leftsearch = binarySearch(nums, target, 0, pivotIndex);
    if(leftsearch != -1) return leftsearch;

    int rightsearch = binarySearch(nums, target, pivotIndex+1, nums.size()-1);
    if(rightsearch!= -1) return rightsearch;
}

//find square root of a number.

int sqr(int num){
    int s=0;
    int e=num;
    int mid;
    int ans = -1;

    while(s<=e){
        mid = (s+e)/2;
        if(mid*mid == num){
            return mid;
        }else if(mid*mid < num){
            ans = mid;
            s = mid+1;
        }else {
            e = mid-1;
        }
    }
    return ans;
}

//Binary search on 2D array



int main(){
    // int n=9;
    // int arr[n]={1,2,3,4,5,6,7,8,9};
    // int key=4;
    // cout << binarysearch(arr, n, key) << endl;
    // cout << firstOccurrence(arr, n, key) << endl;
    // cout << lastOccurrence(arr, n, key) << endl;
    // cout << totalOccurrence(arr, n, key) << endl;
    // cout << missingKey(arr, n) << endl;

    // vector<int> arr = {12,8};
    // cout << peakIndexInMountainArray(arr) << endl;
    // cout << pivotIndexInRotatedArray(arr) << endl;

    cout<< sqr(99);

    return 0;
}

//time complexity of binary search is log(n).