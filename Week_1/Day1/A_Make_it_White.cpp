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
        int ans1 = 0;
        int ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans1 = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                ans2 = i;
                break;
            }
        }
        int result = abs(ans1 - ans2);
        cout << result + 1 << endl;
    }
    return 0;
}