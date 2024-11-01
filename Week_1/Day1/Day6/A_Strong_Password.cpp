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
        string s;
        cin >> s;
        string FinalPassword;
        int maxTime = 0;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            for (int i = 0; i <= s.size(); i++)
            {
                string StrongPassword = s.substr(0, i) + ch + s.substr(i);
                int time = 2;
                for (int j = 1; j < StrongPassword.size(); j++)
                {
                    if (StrongPassword[j] == StrongPassword[j - 1])
                        time += 1;
                    else
                        time += 2;
                }

                if (time > maxTime)
                {
                    maxTime = time;
                    FinalPassword = StrongPassword;
                }
            }
        }

        cout << FinalPassword << endl;
    }
    return 0;
}
