#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<ll,ll>mx,my;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(mx[v[i]]==0){
            mx[v[i]]=i+1;
        }
        my[v[i]]=i+1;
    } 
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        if(mx[x]>0&&my[y]>0&&mx[x]<my[y]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
