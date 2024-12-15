#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int target_position = 0, current_position = 0, unknown_count = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') {
            target_position += 1;
        } else {
            target_position -= 1;
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '+')
            current_position++;
        else if (s2[i] == '-')
            current_position--;
        else
            unknown_count++;
    }

    int diff = abs(target_position - current_position);
    if (diff > unknown_count || (diff + unknown_count) % 2 != 0)
    {
        cout << 0.0 << endl;
        return 0;
    }
    int steps = (diff + unknown_count) / 2;
    int total_way = 1 << unknown_count;
    int valid_way = 1;
    for (int i = 0; i < steps; i++)
        valid_way *= (unknown_count - i);
    for (int i = 1; i <= steps; i++)
        valid_way /= i;
    double probability = (double)valid_way / total_way;
    cout.precision(12);
    cout << fixed << probability << endl;
    return 0;
}