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
        vector<int> ar(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        int minRange = INT_MAX;
        minRange = min(minRange, ar[n - 1] - ar[2]);
        minRange = min(minRange, ar[n - 3] - ar[0]);
        minRange = min(minRange, ar[n - 2] - ar[1]);
        cout << minRange << '\n';
    }
    return 0;
}
