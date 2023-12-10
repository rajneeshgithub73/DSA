#include<bits/stdc++.h>
using namespace std;

class Cqueue{
    int *arr;
    int size;
    int front;
    int back;
public:
    Cqueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        back = -1;
    }

    void push(int data){
        if((front == 0 && back == size-1) || (front-back==1)){
            cout<<"overflow"<<endl;
        }else if(front == -1 && back == -1){
            front++;
            back++;
            arr[back]=data;
        }else if(front !=0 && back == size-1){
            back = 0;
            arr[back] = data;
        }else {
            back++;
            arr[back] = data;
        }
    }

    void pop(){
        if(front == -1 && back == -1){
            cout<<"underflow"<<endl;
        }else if(front == 0 && back == 0){
            front == -1;
            back == -1;
        }else if(back-front == 0){
            front == -1;
            back == -1;
        }else if(back != 0 && front == size-1){
            front = 0;
        }else{
            front++;
        }
    }

    int  getFront(){
        if(front == -1 && back == -1) return -1;
        else return arr[front];
    }

    int getBack(){
        if(front == -1 && back == -1) return -1;
        else return arr[back];
    }

    int getSize(){
        if(front == -1 && back == -1){
            return 0;
        }else if(front > back){
            return size+back-front+1;
        }else{
            return back-front+1;
        }
    }

    bool empty(){
        if(front == -1 && back == -1){
            return true;
        }else {
            return false;
        }
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Cqueue q(5);
    q.print();
    q.push(10);
    q.print();
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    q.push(60);
    q.pop();
    q.print();
    cout<<q.getSize()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getBack()<<endl;
    return 0;
}