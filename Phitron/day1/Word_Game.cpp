#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<set<string>> vx(3);
        map<string, int> mp1, mp2, mp3;
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < n; i++)
            {
                string x;
                cin >> x;
                vx[j].insert(x);
            }
        }
        vector<int>v(3,0);
        for(int i=0;i<3;i++){
            for(set<string>::iterator it=vx[i].begin();it!=vx[i].end();it++){
                string x=*it;
                int l=0;
                for(int j=0;j<3;j++){
                    if(i!=j){
                        l+=vx[j].count(x);
                    }
                }
                if(l==0) v[i]+=3;
                else if(l==1) v[i]+=1;
            }
        }
        for(int x:v){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}