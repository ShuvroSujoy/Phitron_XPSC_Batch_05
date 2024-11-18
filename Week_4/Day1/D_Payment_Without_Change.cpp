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
        long long a, b, n, S;
        cin >> a >> b >> n >> S;
        long long mxNval = min(S / n, a);
        S = (S - mxNval * n);
        if (S <= b)
        {
            cout << "YES" <<'\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
