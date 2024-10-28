#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;
    int cnt = (t + 0.5) / a;
    int ans = b * cnt;
    cout << ans << endl;
    return 0;
}