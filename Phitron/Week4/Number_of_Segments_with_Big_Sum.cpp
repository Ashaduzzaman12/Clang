#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{   
    
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 
    int l=0,r=0;
    ll cnt=0,sum=0;
    while (r<n)
    {
        sum+=v[r];
            while (sum>=k)
            {
                cnt+=(n-r);
                sum-=v[l];
                l++;
            }
        r++;
    }
    cout<<cnt<<endl;
 
}
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
    return 0;
}
