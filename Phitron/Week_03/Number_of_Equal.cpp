#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // cout<<a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i]; // cout<<b[i];
    }

    int l = 0, r = 0;ll tot = 0;
    while (l < n && r < m)
    {
        int cur = a[l], cnt = 0, ct = 0;
        while (l < n && a[l] == cur)
        {
            cnt++, l++;
        }
        while (r < m && cur > b[r])
        {
            r++;
        }
        while (r < m && b[r] == cur)
        {
            ct++, r++;
        }
        tot += (1ll*cnt * ct);
    }
    cout << tot << endl;
}
