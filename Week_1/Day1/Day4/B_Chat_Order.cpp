#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y)
{
    return x.second > y.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> data;
    vector<pair<string, int>> order;
    int cnt = 0;

    while (t--)
    {
        string s;
        cin >> s;

        if (data.find(s) == data.end())
        {
            order.push_back({s, cnt});
        }
        data[s] = cnt++;
    }

    for (auto &val : order)
    {
        val.second = data[val.first];
    }

    sort(order.begin(), order.end(), cmp);

    for (auto val : order)
    {
        cout << val.first << '\n';
    }

    return 0;
}
