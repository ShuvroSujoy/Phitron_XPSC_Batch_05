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
        int ar[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; ++i)
        {
            int b;
            string moves;
            cin >> b >> moves;
            for (char ch : moves)
            {
                if (ch == 'U')
                {
                    ar[i] = (ar[i] + 9) % 10;
                }
                else if (ch == 'D')
                {
                    ar[i] = (ar[i] + 1) % 10;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}