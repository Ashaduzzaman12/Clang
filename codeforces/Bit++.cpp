
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    string ch;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=="++X"||ch=="X++"){
            x++;
        }
        else if(ch=="X--"||ch=="--X"){
            x--;
        }
    }
    cout<<x<<endl;
}
