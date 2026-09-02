#include<bits/stdc++.h>

using namespace std;

struct Envelope {
    int w;
    int h;
    int id;
    
    bool operator<(const Envelope& other) const {
        if (w != other.w) return w < other.w;
        return h < other.h;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cw, ch;
    cin >> n >> cw >> ch;

    vector<Envelope> valid_envs;

    for (int i = 1; i <= n; ++i) {
        int w, h;
        cin >> w >> h;
        
        if (w > cw && h > ch) valid_envs.push_back({w, h, i});
    }

    if (valid_envs.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    sort(valid_envs.begin(), valid_envs.end());

    int m = valid_envs.size();
    vector<int> dp(m, 1);
    vector<int> parent(m, -1);

    int max_len = 0;
    int best_end = -1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < i; ++j) {
            if (valid_envs[j].w < valid_envs[i].w && valid_envs[j].h < valid_envs[i].h) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
        }
        
        if (dp[i] > max_len) {
            max_len = dp[i];
            best_end = i;
        }
    }

    cout << max_len << "\n";
    
    vector<int> ans;
    int curr = best_end;

    while (curr != -1) {
        ans.push_back(valid_envs[curr].id);
        curr = parent[curr];
    }
    
    reverse(ans.begin(), ans.end());
    
    for(auto &x : ans){
    	cout << x << ' ';
	}
	cout << "\n";

    return 0;
}
