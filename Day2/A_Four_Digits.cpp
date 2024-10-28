#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans;
    cin >> s;
    while (s.length() < 4)
    {
        s = '0' + s;
    }
    ans = s;
    cout << ans << endl;
    return 0;
}
