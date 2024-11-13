#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int x,n,m;
    cin>>x>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(m--){
        int l;
        cin>>l;
        ll it=upper_bound(v.begin(),v.end(),l)-v.begin();
        if(it==0){
            cout<<v[it]-1<<endl;
        }
        else if(it==n){
            cout<<x-v[it-1]<<endl;
        }
        else{
            cout<<(v[it]-v[it-1])/2<<endl;
        }
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
