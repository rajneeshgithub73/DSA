#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=0; i<10; i++){
        cout<<i<<" ";
        continue;
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i=0; i<10; i++){
        if(i==5) break;
        cout<<i<<" ";
    }

    return 0;
}