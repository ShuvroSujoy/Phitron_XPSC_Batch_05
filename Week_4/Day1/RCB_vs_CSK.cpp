#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int RCB, CSK;
    cin >> RCB >> CSK;
    if (RCB - CSK >= 18)
        cout << "RCB" << '\n';
    else
        cout << "CSK" << '\n';
    return 0;
}