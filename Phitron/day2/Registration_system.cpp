#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    map<string,int>mx;
    while (t--)
    {
        string x;
        cin>>x;
        if(mx[x]==0){
            mx[x]++;
            cout<<"OK"<<endl;
        }else if(mx[x]>0){
            cout<<x<<mx[x]<<endl;
            mx[x]++;
        }
    }
    
    return 0;
}