#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void sol()
{
    int n,k;
    cin>>n>>k;
    string x;
    cin>>x;
    int cnt=0,bc=0;
    vector<int>v;
    for(int i=0;i<k;i++){
        if(x[i]=='B'){
            bc++;
        } 
        else {
            cnt++;
        }
    }
    int l=cnt;
    for(int i=k;i<n;i++){
        if(x[i]=='W') cnt++;
        if(x[i-k]=='W') cnt--;
        l=min(l,cnt);
    }
    cout<<l<<endl;
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
