#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v(n);
    int cnt=0,m=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<=l) cnt++;
        else cnt=0;
        int x= max(0,cnt-k+1);
        m+=x;
    }
    cout<<m<<endl;
    
}

int main()
{
    int t;
    cin >> t;
    int x, b = 0, p = 0;
    while (t--)
    {
        sol();
    }
}
