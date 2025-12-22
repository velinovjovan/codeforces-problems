#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mapa;
    string s;

    while (n--) {
        cin >> s;
        mapa[s]++;
    }

    string ans;
    int mx = 0;

    for (auto &p : mapa) {
        if (p.second > mx) {
            mx = p.second;
            ans = p.first;
        }
    }

    cout << ans;
}

