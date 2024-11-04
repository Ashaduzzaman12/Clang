#include<bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    int n,m;
    cin>>n>>m;
    cin>>x;
    map<char,int>mx;
    for(int l:x){
        mx[l]++;
    }
    int cnt=0;
    for(auto l:mx){
        if(l.second%2==1) cnt++;
    }
    if(cnt<=m+1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
