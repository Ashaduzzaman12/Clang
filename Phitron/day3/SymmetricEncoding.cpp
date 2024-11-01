#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {   int n;
        cin>>n;
        string x;
        cin>>x;     
        string y;
        map<char,int>m;
        for(char c:x){
            if(m[c]==0){
                y.push_back(c);
                m[c]++;
            }
        }
        sort(y.begin(),y.end());
        map<char,char>mp;
        int l=y.size();
        for(int i=0;i<l;i++){
            mp[y[i]]=y[l-i-1];
            mp[y[l-i-1]]=y[i];
        }
        for(char c:x){
            cout<<mp[c];
        }
        cout<<endl;
    }
    
    return 0;
}