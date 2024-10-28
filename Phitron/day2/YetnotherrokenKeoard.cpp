#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string x;
        cin>>x;
        stack<char>stu,stl;
        for(char c:x){
            if(c!='b'||c!='B'){
                if(c>='a'&&c<=b){
                    stl.push(c);
                }
                if(c>='A'&&c<='Z'){
                    stu.push(c);
                }
            }
            else if(c=='b'){
                
            }
        }
    }
    
    return 0;
}