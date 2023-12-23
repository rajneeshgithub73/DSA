#include<bits/stdc++.h>
using namespace std;

//reverse a queue using recursion
void reverseq(queue<int> &q){
    if(q.empty()) return;

    int temp = q.front();
    q.pop();
    reverseq(q);
    q.push(temp);
}

//reverse queue using stack

//reverse first k elements in queue
void reverseK(queue<int> &q, int k){
    stack<int> s;
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int n = q.size();
    for(int i=0; i<n-k; i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

//Interleace first and second half of queue
void interleave(queue<int> &q){
    queue<int> tempQ;
    int n = q.size();
    for(int i=0; i<n/2; i++){
        tempQ.push(q.front());
        q.pop();
    }
    for(int i=0; i<n-n/2; i++){
        if(!tempQ.empty()){
            q.push(tempQ.front());
            tempQ.pop();
        }
        q.push(q.front());
        q.pop();
    }
}

void printa(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

vector<int> firstNegativeInKWindow(vector<int> v, int k){
    deque<int> d;
    vector<int> ans;
    for(int i=0; i<v.size(); i++){
        if(v[i]<0){
            d.push_back(i);
        }
    }
    int s=0,e=k-1;
    for(int i=0; i<v.size()-k+1; i++){
        if(d.front()>=s && d.front()<=e){
            ans.push_back(v[d.front()]);
        }else{
            ans.push_back(0);
        }
        s++;
        e++;
        if(d.front()<s){
            d.pop_front();
        }
    }

    return ans;
}

vector<char> firstNonRepeatingChar(string str){
    //not completed yet
    queue<char> q;
    vector<char> ans;

    q.push(str[0]);
    ans.push_back(str[0]);

    for(int i=1; i<str.size(); i++){
        if(str[i]==q.front()){
            q.pop();
        }else{
            ans.push_back(q.front());
            q.push(str[i]);
        }
    }
    return ans;
}

vector<int> maxKwindow(vector<int> v, int k){
    deque<int> q;
    vector<int> ans;
    for(int i=0; i<k; i++){
        if(q.empty())
            q.push_back(i);
        else if(v[q.back()] < v[i]){
            q.pop_back();
        }else {
            q.push_back(i);
        }
    }

    ans.push_back(v[q.front()]);

    int s=1;
    int e=k;

    for(int i=k; i<v.size(); i++){
        while(v[q.back()] < v[i]){
            if(q.empty())
                break;
            else if(v[q.back()] < v[i]){
                q.pop_back();
            }else {
                break;
            }
        }

        q.push_back(i);

        while(q.front()<s){
            q.pop_front();
        }

        ans.push_back(v[q.front()]);
    }

    return ans;
}

int countGoodSubstrings(string s) {
    queue<char> q;
    int ans = 0;

}

int main(){
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    // q.push(70);
    // q.push(80);

    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // reverseK(q,3);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;

    // printa(q);
    // interleave(q);
    // printa(q);

    vector<int> v = {1,3,-1,-3,5,3,6,7};
    vector<int> ans = maxKwindow(v,3);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}