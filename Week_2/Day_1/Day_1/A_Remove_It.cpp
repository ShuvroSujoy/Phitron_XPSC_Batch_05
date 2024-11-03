#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> n >> s;
    deque<int> ar;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != s)
        {
            ar.push_back(x);
        }
    }
    for (auto val : ar)
    {
        cout << val << " ";
    }

    return 0;
}