#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{   
}

int main()
{
   int n,m;
   cin>>n>>m;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++){
    cin>>a[i];//cout<<a[i];
   }
   for(int i=0;i<m;i++){
    cin>>b[i];//cout<<b[i];
   }
   ll l=0,r=0,tot=0;
   while (l<n&&r<m)
   { 
    int cur=a[l];
    int cnt=0,ct=0;
    while (l<n && a[l]==cur)
    {
        cnt++,l++;
    }
    while (r<m&&cur>b[r])
    {
        r++;
    }
    while (r<m && b[r]==cur)
    {
        ct++,r++;
    }
    tot+=cnt*ct;
   }
   cout<<tot<<endl;
   
}
