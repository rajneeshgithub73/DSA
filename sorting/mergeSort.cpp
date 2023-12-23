#include<bits/stdc++.h>
using namespace std;

void finalMerge(int v[], int start, int end, int mid){
    int leftLength = mid-start+1;
    int rightLength = end-mid;

    int* left = new int[leftLength];
    int* right = new int[rightLength];

    int k = start;

    for(int i=0; i<leftLength; i++){
        left[i] = v[k];
        k++;
    }

    k = mid+1;

    for(int i=0; i<rightLength; i++){
        right[i] = v[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;

    k = start;
    while(leftIndex<leftLength && rightIndex<rightLength){
        if(left[leftIndex] < right[rightIndex]){
            v[k] = left[leftIndex];
            k++;
            leftIndex++;
        }else{
            v[k] = right[rightIndex];
            k++;
            rightIndex++;
        }
    }

    while(leftIndex < leftLength){
        v[k] = left[leftIndex];
        k++;
        leftIndex++;
    }

    while(rightIndex < rightLength){
        v[k] = right[rightIndex];
        k++;
        rightIndex++;
    }
}

void mergeSort(int v[], int start, int end){
    if(start>=end) return;

    int mid = (start + end)/2;

    mergeSort(v, start, mid);
    mergeSort(v, mid+1, end);

    finalMerge(v, start, end, mid);
}

int main(){

    int v[] = {5,4,7,8,6,2,4,5};

    mergeSort(v, 0, 7);

    for(int i=0; i<8; i++){
        cout << v[i] << " ";
    }
    return 0;
}