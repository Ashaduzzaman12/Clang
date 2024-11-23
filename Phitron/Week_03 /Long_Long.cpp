#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (int &l : v)
    {
        cin >> l;
        sum += abs(l);
    }
    int tot = 0, cnt = 0;
    for (int x : v)
    {
        if (x == 0 && cnt == 0)
            continue;
        if (x <= 0)
            cnt++;
        else
        {
            if (cnt > 0)
            {
                tot++;
            }
            cnt = 0;
        }
    }
    if (cnt)
        tot++;
    cout << sum << " " << tot << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}
