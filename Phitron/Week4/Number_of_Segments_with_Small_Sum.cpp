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
 
    int l=0,r=0;ll cnt=0;
    ll sum=0;
    while (r<n)
    {
        sum+=v[r];
        if(sum<=k){
            cnt+=(r-l+1);
        }
        else{
            while (sum>k&&l<=r)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=k){
                cnt+=(r-l+1);
            }
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
