#include<bits/stdc++.h>
using namespace std;

void reverseString(string str){
    stack<char> st;

    for(int i=0; i<str.size(); i++){
        st.push(str[i]);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

int getMid(stack<int> &st, int pos){
    if(pos == 1){
        return st.top();
    }

    int temp = st.top();
    st.pop();
    pos--;

    int mid = getMid(st, pos);

    st.push(temp);

    return mid;
}

int getMiddleElement(stack<int> &st){
    if(st.empty()){
        return -1;
    }

    int pos;

    if(st.size()%2 == 0){
        pos = st.size()/2;
    }else{
        pos = (st.size()/2)+1;
    }

    return getMid(st, pos);
}

void insertAtBottom(stack<int> &st, int data){
    if(st.empty()){
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st, data);

    st.push(temp);
}

void reverseStack(stack<int> &st){
    if(st.empty()) return;
    int temp = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, temp);
}

void insertSort(stack<int> &st, int data){
    if(st.empty() || data>st.top()){
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();

    insertSort(st, data);

    st.push(temp);
}

void sortStack(stack<int> &st){
    if(st.empty() || st.size()==1) return;

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertSort(st, temp);
}


int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(60);
    st.push(50);
    st.push(40);
    st.push(30);

    // cout<<getMiddleElement(st)<<endl;
    // cout<< st.size() << endl;

    // insertAtBottom(st, 5);
    // cout<< st.size() <<endl;

    // cout<< st.top() << endl;
    // reverseStack(st);
    // cout<< st.top() << endl;

    // cout<< st.top() << endl;
    // sortStack(st);
    // cout<< st.top() << endl;

    

    return 0;
}