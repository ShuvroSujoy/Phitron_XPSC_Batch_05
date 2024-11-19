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
        int n, coin;
        cin >> n >> coin;
        vector<int> cost(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
            cost[i] += (i + 1);
        }
        sort(cost.begin(), cost.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (coin >= cost[i])
            {
                coin=coin- cost[i]; 
                count++; 
            }
            else
            {
                break;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
