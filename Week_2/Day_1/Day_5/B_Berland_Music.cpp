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

        vector<int> p(n);
        vector<int> liked, disliked;
        string s;
        vector<int> ind(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            ind[p[i] - 1] = i;
        }

        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                liked.push_back(p[i]);
            else
                disliked.push_back(p[i]);
        }

        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());

        vector<int> q(n);
        int rate = 1;

        for (int song : disliked)
        {
            int idx = ind[song - 1];
            q[idx] = rate++;
        }
        for (int song : liked)
        {
            int idx = ind[song - 1];
            q[idx] = rate++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
