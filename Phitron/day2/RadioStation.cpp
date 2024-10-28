#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<string,string>mx;
    while(n--){
        string x,ip;
        cin>>x>>ip;
        ip+=';';
        mx[ip]=x;//cout<<mx[ip]<<endl;
    }
     while(m--){
        string x,ip;
        cin>>x>>ip;
        cout<<x<<" "<<ip<<" #";
        int l=ip.size();
      //  ip.pop_back();
      //  cout<<ip<<endl;
        cout<<mx[ip]<<endl;
    }
    

    return 0;
}