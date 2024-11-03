#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int len = s.size();
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<'\n';

    return 0;
}