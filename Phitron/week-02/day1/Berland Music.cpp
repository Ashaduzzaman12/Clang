#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string x;cin>>x;
    map<int,int>l,d;
    for(int i=0;i<n;i++){
        if(x[i]=='1'){
            l[v[i]]=i;
        }
        else{
            d[v[i]]=i;
        }
    }
    int k=1;
    for(auto i:d){
        v[i.second]=k++;
    }
    for(auto i:l){
        v[i.second]=k++;
    }
    for(int l:v) cout<<l<<" ";
    cout<<endl;
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}
