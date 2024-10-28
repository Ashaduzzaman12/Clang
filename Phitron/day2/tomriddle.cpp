#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string ,int>mx;
    while (n--)
    {
        string x;
        cin>>x;
        if(mx[x]==0){
            cout<<"NO"<<endl;
            mx[x]++;
        }
        else{
            cout<<"YES"<<endl;
            mx[x]++;
        }
    }
    
    return 0;
}