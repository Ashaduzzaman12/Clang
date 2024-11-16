#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{

    int x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<pair<int, int>> s, sx;
    vector<int> vx; 
    int sp=0;
    while (t--)
    {  
        int x;
        cin>>x;
        if(x==1){
            sp++;
            int l;cin>>l;
            s.insert({sp,l});
            sx.insert({l,-sp});
        }
        if(x==2){
            vx.push_back(s.begin()->first);
            sx.erase({s.begin()->second,-(s.begin()->first)});
            s.erase({s.begin()->first,s.begin()->second});
        }
        if(x==3){
            vx.push_back(-sx.rbegin()->second);
            s.erase({-sx.rbegin()->second,sx.rbegin()->first});
            sx.erase({sx.rbegin()->first,sx.rbegin()->second});
        }
    }
    for(auto u:vx){
        cout<<u<<" ";
    } cout<<endl;
}
