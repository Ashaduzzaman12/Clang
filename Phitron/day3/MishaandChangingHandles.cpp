#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<pair<string ,string>>vp;
    map<string,string>mp;
    while (t--)
    {   
        string x,y;
        cin>>x>>y;
        int i;
        for(i=0;i<vp.size();i++){
            if(vp[i].second==x){
                vp[i].second=y;
                break;
            }
        }
        if(i==vp.size()){
            vp.push_back(make_pair(x,y));
        }
    }
    cout<<vp.size()<<endl;
    for(auto it:vp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}