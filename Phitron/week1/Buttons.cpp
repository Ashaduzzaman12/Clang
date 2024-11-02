#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<2*a<<endl;
    }
    else{
        int l=max(a,b);
        cout<<l+l-1<<endl;
    }
    return 0;
}