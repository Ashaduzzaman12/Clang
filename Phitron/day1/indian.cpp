#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<string>x;
    while (n--)
    {
        string s,c;
        cin>>s>>c;
        string l=c+s;
        x.insert(l);
    }
    cout<<x.size()<<endl;
    return 0;
}
