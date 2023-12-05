//implementation of two stack using a single array.

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int* arr;
    int size;
    int top1;
    int top2;

public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 == 1) return;
        top1++;
        arr[top1]=data;
    }

    void push2(int data){
        if(top2-top1 == 1) return;
        top2--;
        arr[top2]=data;
    }

    void pop1(){
        if(top1==-1) return;
        top1--;
    }

    void pop2(){
        if(top2 == size) return;
        top2++;
    }
};

int main(){

    

    return 0;
}