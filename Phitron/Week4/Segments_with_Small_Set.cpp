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
    map<int,int>mx;
    int l=0,r=0;
    ll cnt=0,sum=0;
    while (r<n)
    {
        mx[v[r]]++;
            while (mx.size()>k)
            {
                mx[v[l]]--;
                if(mx[v[l]]==0){
                    mx.erase(v[l]);
                }
                l++;
            }
            cnt+=(r-l+1);
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
