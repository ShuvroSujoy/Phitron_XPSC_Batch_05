#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int armies[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cin >> armies[i];
    }
    int fed_army = armies[m];
    int frnd_count = 0;
    for (int i = 0; i < m; i++)
    {
        int ans = armies[i] ^ fed_army;
        int hamDis = 0;
        while (ans > 0)
        {
            hamDis += (ans & 1);
            ans >>= 1;
        }
        if (hamDis <= k)
        {
            frnd_count++;
        }
    }
    cout << frnd_count << '\n';
    return 0;
}
