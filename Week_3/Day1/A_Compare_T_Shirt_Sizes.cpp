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
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "=" << '\n';
            continue;
        }

        if (a == "M")
        {
            if (b.back() == 'S')
                cout << ">" << '\n';
            else
                cout << "<" << '\n';
            continue;
        }
        if (b == "M")
        {
            if (a.back() == 'S')
                cout << "<" << '\n';
            else
                cout << ">" << '\n';
            continue;
        }
        if (a.back() == 'S' && b.back() == 'S')
        {
            if (a.size() > b.size())
                cout << "<" << '\n';
            else
                cout << ">" << '\n';
            continue;
        }
        if (a.back() == 'L' && b.back() == 'L')
        {
            if (a.size() > b.size())
                cout << ">" << '\n';
            else
                cout << "<" << '\n';
            continue;
        }
        if (a.back() == 'S' && b.back() == 'L')
        {
            cout << "<" << '\n';
        }
        else if (a.back() == 'L' && b.back() == 'S')
        {
            cout << ">" << '\n';
        }
    }
    return 0;
}
