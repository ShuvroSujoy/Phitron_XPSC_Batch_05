#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    sort(dq.begin(), dq.end());

    int mxcnt = 1,crcnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (dq[i] == dq[i - 1])
        {
            crcnt++;
        }
        else
        {
            mxcnt = max(mxcnt, crcnt);
            crcnt = 1;
        }
    }
    mxcnt = max(mxcnt, crcnt);
    int ans=mxcnt;
    cout << ans << '\n';

    return 0;
}
