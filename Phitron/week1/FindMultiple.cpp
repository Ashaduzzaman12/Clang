#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin>>x;
    map<char,bool>mp;
    for(char c:x){
        mp[c]=true;
    }
    bool l=false;
    for(char i='a';i<='z';i++){
        if(mp[i]==false){
            l=true;
            cout<<i<<endl;
            break;
        }
    }
    if(l==false){
        cout<<"None"<<endl;
    }
}