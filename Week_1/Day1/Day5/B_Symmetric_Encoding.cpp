#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;
        set<char> uc(b.begin(), b.end());

        string r(uc.begin(), uc.end());
        unordered_map<char, char> mp;
        int m = r.size();
        for (int i = 0; i < m; ++i)
        {
            mp[r[i]] = r[m - i - 1];
        }
        string ans;
        for (char c : b)
        {
            ans += mp[c];
        }
        cout << ans << endl;
    }

    return 0;
}
