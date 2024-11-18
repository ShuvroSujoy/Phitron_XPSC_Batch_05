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
        string s;
        cin >> s;
        int subStr = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                subStr++;
            }
        }
        cout << (subStr + 1) / 2 << '\n';
    }

    return 0;
}
