#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int &l:v)cin>>l;

    int l=0,r=0,cnt=INT_MAX;
    ll sum=0;
    while (r<n)
    {
        sum+=v[r];
        while (sum>=k)
        {
            cnt=min(r-l+1,cnt);
            sum-=v[l];l++;
        }
        r++;
    }
    if(cnt==INT_MAX) cout<<-1<<endl;
    else cout<<cnt<<endl;
}
int main()
{
    sol();
}
