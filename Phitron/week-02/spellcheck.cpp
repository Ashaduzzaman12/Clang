#include<bits/stdc++.h>
using namespace std;
int main(){
   int t ,n;
   string ch;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>n>>ch;int t=0,l=0,m=0,u=0,r=0;
    for(int j=0;j<n;j++){
        if(ch[j]=='T'){
            t++;
        }
        else if(ch[j]=='i'){
            l++;
        }
        else if(ch[j]=='m'){
            m++;
        }
        else if(ch[j]=='u'){
            u++;
        }
        else if(ch[j]=='r'){
            r++;
        }
    }
    if(t==1&&l==1&&m==1&&u==1&&r==1&&n==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}