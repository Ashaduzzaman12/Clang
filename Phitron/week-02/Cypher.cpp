#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        string x;
        cin >> k >> x;
        for (char c : x)
        {
            if (c == 'D')
            {
                if(v[i]==9){
                    v[i]=0;
                }
                else{
                    v[i]+=1;
                }
            }
            else
            {  
                if(v[i]==0){
                    v[i]=9;
                }
                else{
                    v[i]-=1;
                }
            }
        }
    }
    for (int l : v)
    {
        cout << l << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}