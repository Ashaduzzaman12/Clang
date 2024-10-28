#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int>mx;
    while (n--)
    {
        int x;
        cin>>x;
        mx[x]++;
    }
    int cnt=0;
    for(auto it:mx){
        int l=it.second;
        cnt=max(cnt,l);
    }
    cout<<cnt<<endl;
    
    return 0;
}