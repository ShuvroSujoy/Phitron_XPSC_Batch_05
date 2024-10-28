#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int press_x2 = x + (x - 1);
    int press_y2 = y + (y - 1);
    int get_coin1 = max(press_x2, press_y2);
    int get_coins = x + y;
    int ans = max(get_coin1, get_coins);
    cout << ans << endl;
    return 0;
}