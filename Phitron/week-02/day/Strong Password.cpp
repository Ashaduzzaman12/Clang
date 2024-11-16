#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    string x;
    cin>>x;
    int pos;
    bool f=false;
    for(int i=0;i<x.size();i++){
        cout<<x[i];
        if(x[i]==x[i+1]&&f==false){
            if(x[i]=='z'){
                x[i]='a';
            }
            cout<<++x[i];
            f=true;
        }
    }
    if(f==false){
        if(x[x.size()-1]=='z'){
            x[x.size()-1]='a';
        }
        cout<<++x[x.size()-1]<<endl;;
    }
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
