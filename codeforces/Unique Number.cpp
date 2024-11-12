#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol()
{
    string x;
    int l = 9, sum = 0;
    set<int> s;
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n << endl;
    }
    else
    {
        while (l > 0)
        {
            if (n - sum >= l)
            {
                sum += l;
                x += (l + '0');
                s.insert(l);
            }
            l--;
        }
        if (x.size() != s.size() || sum != n)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(x.begin(), x.end());
            cout << x << endl;
        }
    }
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
