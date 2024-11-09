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
        vector<int> card(n);
        for (int i = 0; i < n; i++)
        {
            cin >> card[i];
        }
        priority_queue<int> bd;
        long long totalPower = 0;

        for (int i = 0; i < n; i++)
        {
            if (card[i] == 0)
            {
                if (!bd.empty())
                {
                    totalPower += bd.top();
                    bd.pop();
                }
            }
            else
            {

                bd.push(card[i]);
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}
