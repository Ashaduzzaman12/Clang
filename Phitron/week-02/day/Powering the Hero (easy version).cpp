#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    multiset<int, greater<int>> mx;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            mx.insert(v[i]);
        }
        else
        {
            if (mx.size() != 0)
            {
                cnt += *mx.begin();
                mx.erase(mx.begin());
            }
        }
    }
    cout << cnt << endl;
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
