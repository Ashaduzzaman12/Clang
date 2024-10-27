#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string x;
        cin>>n>>x;
        vector<int>no;
        for(int i=0;i<n;i++){
            if(x[i]=='B'){ int l=0;
                for(int j=i;j<n;j++){
                        l++;
                    if(x[j]=='B') {
                        no.push_back(l);
                    }
                }
            }
        }
        cout<<*max_element(no.begin(),no.end())<<endl;
    }
}
 
