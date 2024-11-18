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
        int x, y;
        cin >> x >> y;
        int rem1 = x % 3;
        int rem2 = y % 3;
        if (rem1 == rem2)
            cout << rem1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}