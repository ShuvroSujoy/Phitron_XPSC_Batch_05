#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<string> leaves;
    while (t--)
    {
        string s, c;
        cin >> s >> c;
        leaves.insert(s + " " + c);
    }
    cout << leaves.size() << endl;
    ;

    return 0;
}