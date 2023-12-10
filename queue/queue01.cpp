#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int Size;
    int Front;
    int Back;

public:
    Queue(int size){
        Size = size;
        arr = new int[Size];
        Front = 0;
        Back = 0;
    }

    void push(int data){
        if(Back == Size){
            cout<<"overflow"<<endl;
        }else{
            arr[Back] = data;
            Back++;
        }
    }

    void pop(){
        if(Front == Back){
            cout<<"underflow"<<endl;
        }else{
            Front++;
        }
        if(Front == Back){
            Front = 0;
            Back = 0;
        }
    }

    int size(){
        return (Back-Front);
    }

    bool empty(){
        if(Front == Back){
            return true;
        }else{
            return false;
        }
    }

    int front(){
        if(Front == Back){
            return INT_MAX;
        }else{
            return arr[Front];
        }
    }

    int back(){
        if(Front == Back){
            return INT_MAX;
        }else{
            return arr[Back-1];
        }
    }
};

int main(){

    Queue q(10);
    q.push(2);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.push(10);
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    return 0;
}