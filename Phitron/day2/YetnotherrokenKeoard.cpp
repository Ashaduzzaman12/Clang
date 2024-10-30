#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        string y;
        reverse(x.begin(),x.end());
        int l = 0, u = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == 'b')
            {
                l++;
            }
            if (x[i] == 'B')
            {
                u++;
            }
            if (x[i] !='B' && x[i] != 'b')
            {
                if (l > 0 && islower(x[i]))
                {
                    l--;
                    continue;
                }
                if (u > 0 && isupper(x[i]))
                {
                    u--;
                    continue;
                }
                y.push_back(x[i]);
            }
        }
        reverse(y.begin(), y.end());
        cout << y << endl;
    }
}
