#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> x, pair<string, int> y) {
    return x.second < y.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<pair<string, int>> v1, v2;
        vector<pair<string, int>> ans;

       
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {
                
                if (!v1.empty()) {
                    v1.pop_back();
                }
            } 
            else if (s[i] == 'B') {

                if (!v2.empty()) {
                    v2.pop_back();
                }
            } 
            else {
                
                if (islower(s[i])) {
                    v1.push_back({string(1, s[i]), i});
                } else {
                    v2.push_back({string(1, s[i]), i});
                }
            }
        }

        ans.insert(ans.end(), v1.begin(), v1.end());
        ans.insert(ans.end(), v2.begin(), v2.end());
        sort(ans.begin(), ans.end(), cmp);
        for (auto &ch : ans) {
            cout << ch.first;
        }
        cout << '\n';
    }

    return 0;
}
