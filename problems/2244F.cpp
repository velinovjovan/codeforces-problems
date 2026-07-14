#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int MAX = 200005;

struct Node {
    int mn;
    int mx;
    int count;
};

int a[MAX];
bool ans = true;
vector<int> adj[MAX];
Node dp[MAX];

void dfs(int u) {
    if (!ans) return;

    if (adj[u].empty()) {
        dp[u].mn = a[u];
        dp[u].mx = a[u];
        dp[u].count = 1;
        return;
    }

    dp[u].mn = INF;
    dp[u].mx = -INF;
    dp[u].count = 0;

    vector<int> mins;

    for (int v : adj[u]) {
        dfs(v);
        if (!ans) return;

        dp[u].mn = min(dp[v].mn, dp[u].mn);
        dp[u].mx = max(dp[v].mx, dp[u].mx);
        dp[u].count += dp[v].count;
        mins.push_back(dp[v].mn);
    }

    if (dp[u].mx - dp[u].mn + 1 != dp[u].count) {
        ans = false;
        return;
    }

    if (mins.empty()) return;

    int dr = 0;
    for (int i = 0; i < (int)mins.size() - 1; ++i) {
        if (mins[i] > mins[i + 1]) ++dr;
    }

    if (dr > 1 || (dr == 1 && mins.back() > mins[0])) {
        ans = false;
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ans = true;
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }

        for (int i = 2; i <= n; ++i) {
            int p;
            cin >> p;
            adj[p].push_back(i);
        }

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; ++i) {
            sort(adj[i].begin(), adj[i].end());
        }

        dfs(1);

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
