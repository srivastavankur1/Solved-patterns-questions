#include<bits/stdc++.h>
using namespace std;

void print11(int n) {
    for(int i=1; i<=n; i++){
        int start = 1;
        if(i%2==0) start=0;
        else start=1;
        for(int j=1; j<=i; j++){
            cout<<start;
            start= 1-start;
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print11(n);
    }
    
}
