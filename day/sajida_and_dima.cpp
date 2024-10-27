#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1,s=0,d=0;
    int mv=0;
    while(l<=r){
        if(mv%2==0){
            if(arr[l]>=arr[r]){
                s+=arr[l];
                l++;
            }
            else{
                s+=arr[r];
                r--;
            }//cout<<s<<endl;
        }
        else{
            if(arr[l]>=arr[r]){
                d+=arr[l];
                l++;
            }
            else{
                d+=arr[r];
                r--;
            }
        }
        mv++;
    }
    cout<<s<<" "<<d<<endl;
    
    return 0;
}