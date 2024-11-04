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
        string row1, row2;
        cin >> row1 >> row2;
        bool check = true;
        for (int i = 0; i < n; ++i)
        {
            if ((row1[i] == 'R' && row2[i] != 'R') || (row1[i] != 'R' && row2[i] == 'R'))
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << "YES"<<'\n';
        }
        else
        {
            cout << "NO"<<'\n';
        }
    }
    return 0;
}
