#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n; int l=n-1;
    map<string,int>mx;
    vector<string>vx;
    while (n--)
    {
        string x;
        cin>>x;
        vx.push_back(x);
    }
    for(int i=l;i>=0;i--){
        if(mx[vx[i]]==0){
            cout<<vx[i]<<endl;
            mx[vx[i]]++;
        }
    }
    return 0;
}