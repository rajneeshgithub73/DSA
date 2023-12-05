//stack data structure
//last in first out(LIFO)
//shaadi me plates ka example

//stack implementation from scratch :

#include <bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
public:
    Stack(int s){
        arr = new int[10];
        size = s;
        top = -1;
    }

    void push(int data){
        if(top == size-1) return;
        top++;
        arr[top]=data;
    }

    void pop(){
        if(top == -1) return;
        top--;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int getTop(){
        if(top == -1){
            return INT_MAX;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }
};

int main(){
    
    Stack st(10);
    st.push(10);
    st.push(20);
    cout<<st.getTop()<<endl;
    cout<<st.getSize()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}