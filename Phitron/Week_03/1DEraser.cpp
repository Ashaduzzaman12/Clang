#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,m,l=0;
    string ch,c;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n>>m;
        cin>>ch;int i=0;
        while(i<n){
            if(ch[i]=='B'){
                l++;
                i+=m;
            }
            else{
                i++;
            }
        }
        cout<<l<<endl;l=0;
    }
}
