#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int &l:v){
        cin>>l;
    }
    int l=0,r=0,cnt=0;
    ll sum=0;
    while (r<n)
    {
        sum+=v[r];
        if(sum<=k){
            cnt=max(cnt,r-l+1);
        }
        else{
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<cnt<<endl;
 
    
}
int main()
{
    sol();
}
