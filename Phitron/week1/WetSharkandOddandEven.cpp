#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long arr[n];
    long long l = 0, ml = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        l += arr[i];
    }
    if (l % 2 == 0)
    {
        cout << l << endl;
    }
    else
    {
        sort(arr, arr + n);
        for (int x : arr)
        {
            if (x % 2 != 0)
            {
                l -= x;
                break;
            }
        }

        cout << l << endl;
    }
    return 0;
}