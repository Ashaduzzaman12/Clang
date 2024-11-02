#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string x;
    x=to_string(n);
    if(x.size()<4){
        int l=4-x.size();
        while (l--)
        {
            cout<<0;
        }
        cout<<x<<endl;
    }
    else{
        cout<<x<<endl;
    }
}