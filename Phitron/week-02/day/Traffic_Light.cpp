#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int n;
    char c;
    string s;
    cin>>n>>c>>s;
    string x=s+s;
    int mx=0,gp=-1;
    for(int i=x.size()-1;i>=0;i--){
        if(x[i]=='g') gp=i;
        if(x[i]==c) mx=max(mx,gp-i);
    }
    cout<<mx<<endl;
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
