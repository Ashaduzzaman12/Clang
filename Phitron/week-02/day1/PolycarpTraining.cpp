#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<int>s;
    vector<int>v(n);
    for(int &l:v){
        cin>>l;
    }
    sort(v.begin(),v.end());
    int k=1,cnt=0;
    for(int i=0;i<n;i++){
        if(k<=v[i]){
            k++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}
