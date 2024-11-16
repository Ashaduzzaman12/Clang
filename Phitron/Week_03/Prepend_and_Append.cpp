#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int n;string x;
    cin>>n>>x;
    int l=0,r=n-1; int cnt=0;
    while(l<=r){
        if((x[l]=='1'&&x[r]=='0')||x[l]=='0'&&x[r]=='1'){
            l++;r--;cnt++;
        }
        else{
            break;
        }
    }
    cout<<n-2*cnt<<endl;
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
