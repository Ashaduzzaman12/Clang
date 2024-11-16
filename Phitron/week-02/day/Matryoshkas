#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mx;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx[v[i]]++;
    }
    sort(v.begin(),v.end());
    int  cnt=0;
    for(int x:v){
        if(mx[x]!=0){
            cnt++;
            while (mx[x]>0)
            {
                mx[x]--;
                x++;
            }
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}
