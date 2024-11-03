#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int &l:v){
        cin>>l;
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==x){
            v.erase(v.begin()+i);
        }
    }
    if(!v.empty()){
        for(int l:v){
        cout<<l<<" ";
    }
    cout<<endl;
    }
    return 0;
}