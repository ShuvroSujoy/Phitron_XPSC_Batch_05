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
        string s;
        cin >> n >> s;
        string ans;
        int indx = n - 1;
        while (indx >= 0)
        {
            if (s[indx] == '0')
            {
                int num = (s[indx - 2] - '0') * 10 + (s[indx - 1] - '0');
                ans = char('a' + num - 1) + ans;
                indx = indx - 3;
            }
            else
            {
                int num = s[indx] - '0';
                ans = char('a' + num - 1) + ans;
                indx--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
