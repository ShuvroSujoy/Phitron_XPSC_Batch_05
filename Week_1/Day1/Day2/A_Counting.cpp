#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int cnt = -1;
    for (int i = a; i <= b; i++)
    {
        cnt++;
    }
    cout << cnt+1 << endl;

    return 0;
}