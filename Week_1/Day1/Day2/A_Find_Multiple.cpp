#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    int ans;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}