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
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }

        if (XOR == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            int flag = 0;
            for (int x = 0; x < (1 << 8); x++)
            {
                int newXOR = 0;
                for (int i = 0; i < n; i++)
                {
                    newXOR ^= (a[i] ^ x);
                }
                if (newXOR == 0)
                {
                    cout << x << '\n';
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}
