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
        string b;
        cin >> n >> b;
        set<char> uc(b.begin(), b.end());
        string r(uc.begin(), uc.end());
        int m = r.size();
        string ans;
        for (char c : b)
        {
            int pos = r.find(c);
            char decodecahr = r[m - pos - 1];
            ans += decodecahr;
        }
        cout << ans << endl;
    }
    return 0;
    return 0;
}