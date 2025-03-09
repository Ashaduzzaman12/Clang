#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>v,int t){
    int l=0,r=v.size()-1;
    while (l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==t){
            return mid;
        }
        else if(v[mid]<t){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>v(n); for(int &l:v) cin>>l;
    
    vector<int>q(k); for(int &k:q) cin>>k;
    for(int i=0;i<k;i++){
        int l=q[i];
        int res= binary_search(v,l);
        if(res==-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
