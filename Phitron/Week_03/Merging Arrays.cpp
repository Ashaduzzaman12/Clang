#include <bits/stdc++.h>
// #include <ranges>
#define ll long long
using namespace std;

void sol()
{   
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i=0;i<(n+m);i++){
        int x;
        cin>>x;
        v.push_back(x);        
    }
    sort(v.begin(),v.end());
    for(int l:v) cout<<l<<" ";
    cout<<endl;
}
