#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> ar(n);
    long long sum = 0;
    int smallestOdd = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        if (ar[i] % 2 != 0)
        {
            smallestOdd = min(smallestOdd, ar[i]);
        }
    }

    if (n == 0)
    {
        cout << 0 << '\n';
    }
    else if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        if (sum % 2 != 0)
        {
            sum -= smallestOdd;
            cout << sum << '\n';
        }
    }

    return 0;
}
