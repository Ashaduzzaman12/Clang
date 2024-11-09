#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mx;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx[x]++;
    }
    int ma = 0;
    for (auto it : mx)
    {
        ma = max(ma, it.second);
    }
    if (n % 2 == 0)
    {
        if (ma > n / 2)
        {
            cout << 2 * ma - n << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (ma > n / 2)
        {
            cout << 2 * ma - n << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
