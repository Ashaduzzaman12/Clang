#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    priority_queue<ll>q;
    ll n;
    cin>>n;
    for (ll i = n; i>=1; i--)
    {
        q.push(i);
    }
    cout<<2<<endl;
    while (q.size()>1)
    {   ll m,l;
        m=q.top();
        q.pop();
        l=q.top();
        q.pop();
        cout<<m<<" "<<l<<endl;
        ll k=m+l;
        if(k&1) k++;
        k=k/2;
        q.push(k);
    } 

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
