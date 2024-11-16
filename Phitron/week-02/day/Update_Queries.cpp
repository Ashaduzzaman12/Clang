#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int n,m;
    cin>>n>>m;
    string x;cin>>x;
    set<int>s;
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        s.insert(l);
    }
    string y;cin>>y;
    sort(y.begin(),y.end());
    int pos=0;
    for(auto i:s){
        x[i-1]=y[pos];
        pos++;
    }
    cout<<x<<endl;
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
