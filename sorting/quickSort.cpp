#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end){
    if(start >= end) return;

    int i = start-1;
    int j = start;
    int pivot = end;

    while(j < pivot) {
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[j], arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[pivot], arr[i]);

    quickSort(arr, start, i-1);
    quickSort(arr, i+1, end);
}

int main(){
    int v[] = {5,4,7,8,6,2,4,5};

    quickSort(v, 0, 7);

    for(int i=0; i<8; i++){
        cout << v[i] << " ";
    }

    return 0;
}