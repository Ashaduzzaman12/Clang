#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x,y;
    cin>>x>>y;
    int l=0,n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]!=y[i]){
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}