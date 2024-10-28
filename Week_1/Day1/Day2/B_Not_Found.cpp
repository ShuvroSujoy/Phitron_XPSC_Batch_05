#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int frq[26];
    memset(frq, 0, sizeof(frq));

    for (auto c : s)
    {
        frq[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!frq[i])
        {
            cout << char('a' + i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}
