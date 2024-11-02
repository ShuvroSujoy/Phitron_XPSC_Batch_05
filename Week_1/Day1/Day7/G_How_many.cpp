#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s - a; b++)
        {
            for (int c = 0; c <= s - a - b; c++)
            {

                int sum = a + b + c;
                int mul = a * b * c;
                if (sum <= s && mul <= t)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}