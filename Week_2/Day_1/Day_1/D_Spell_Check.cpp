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
        string main = "Timur";
        sort(main.begin(), main.end());
        int n;
        string s;
        cin >> n;
        cin >> s;

        if (n != 5)
        {
            cout << "NO" << '\n';
            continue;
        }
        sort(s.begin(), s.end());
        if (s == main)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
