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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int B_Count = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                B_Count++;
        }

        int MinWiteCount = B_Count;
        for (int i = k; i < n; i++)
        {
            if (s[i - k] == 'W') 
            B_Count--;
            if (s[i] == 'W')
             B_Count++;
            MinWiteCount = min(MinWiteCount, B_Count);
        }

        cout << MinWiteCount << '\n';
    }
    
    return 0;
}
