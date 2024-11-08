#include <bits/stdc++.h>
#define ll long long 
using namespace std;
//const ll N = 2e5+10;
 
int main()
{
   int n,m;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   set<int>ns;
   map<int,int>mp;
   for(int i=n-1;i>=0;i--){
      ns.insert(arr[i]);
      mp[i]=ns.size();
   }
   while (m--)
   {
      int l;
      cin>>l;
      cout<<mp[l-1]<<endl;
   }
   
 
}
