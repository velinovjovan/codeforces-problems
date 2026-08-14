#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, int>> rounds;
    rounds.reserve(n);
    unordered_map<string, int> total;

    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;

        rounds.push_back({s, x});
        total[s] += x;
    }

    int maks = numeric_limits<int>::min();

    for (auto &[name, score] : total) {
        maks = max(maks, score);
    }

    unordered_map<string, int> current;

    for (auto &[name, score] : rounds) {
        current[name] += score;

        if (current[name] >= maks && total[name] == maks) {
            cout << name;
            break;
        }
    }

    return 0;
}
