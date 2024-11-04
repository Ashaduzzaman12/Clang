#include <bits/stdc++.h>
using namespace std;
void subdiagonals(){
    int n;
    cin>>n;
    vector v(n,vector<int>(n));
     for(auto &x:v){
        for(int &y:x){
            cin>>y;
        }
     } 
     int ans=0;
     for(int i=1-n;i<n;i++){
        int l=INT_MAX;
        for(int j=max(0,-i);max(j,i+j)<n;j++){
            l=min(l,v[j][i+j]);
        }
        ans+=max(0,-l);
    }
    cout<<ans<<endl;
 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {        
    subdiagonals();
    }
 
    return 0;
}
