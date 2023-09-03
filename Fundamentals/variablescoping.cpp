#include<bits/stdc++.h>
using namespace std;
int a=5;

int main(){
    int i;
    for(i=0; i<5; i++){
        cout<<i<<" ";
    }
    cout<<i<<endl;

    
    if(true){
        int a = 25;
        cout<< a << endl;
        cout<< ::a << endl;
    }
    cout<< a ;
    return 0;
}