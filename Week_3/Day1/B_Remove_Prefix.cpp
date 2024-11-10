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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_set<int> s;
        int indx = n - 1;
        while (indx >= 0)
        {
            if (s.count(a[indx]))
            {
                break;
            }
            s.insert(a[indx]);
            indx--;
        }

        cout << indx + 1 << '\n';
    }

    return 0;
}
