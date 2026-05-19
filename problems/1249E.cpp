#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c;
    cin >> n >> c;

    vector<int> stairs(n);
    for (int i = 1 ; i < n ; ++i) cin >> stairs[i];

    vector<int> elevator(n);
    for (int i = 1 ; i < n ; ++i) cin >> elevator[i];


    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    dp[1][0] = 0; 
    dp[1][1] = c; 

    cout << 0 << " ";

    for (int i = 2 ; i <= n ; ++i) {
        dp[i][0] = min(dp[i-1][0] + stairs[i-1], dp[i-1][1] + stairs[i-1]);
        dp[i][1] = min(dp[i-1][0] + c + elevator[i-1], dp[i-1][1] + elevator[i-1]);
        
        cout << min(dp[i][0], dp[i][1]) << ' ';
    }

    return 0;
}
