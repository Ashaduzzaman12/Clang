#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        map<ll,ll>mx;
        for(int i=0;i<k;i++){
            int b,c;
            cin>>b>>c;
            mx[b]+=c;
        }
        vector<ll>v;
        for(auto l:mx){
            v.push_back(l.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int l=v.size();
        int br=min(n,l);
        ll cost=0;
        for(int i=0;i<br;i++){
            cost+=v[i];
        }
    cout<<cost<<endl;
    }
    
    return 0;
}
