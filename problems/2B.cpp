#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> dp2(n, vector<int>(n));
    vector<vector<int>> dp5(n, vector<int>(n));

    int zeroI = -1, zeroJ = -1;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> matrix[i][j];

            if(matrix[i][j] == 0) {
                zeroI = i;
                zeroJ = j;
            }
        }
    }

    vector<vector<int>> two(n, vector<int>(n));
    vector<vector<int>> five(n, vector<int>(n));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(matrix[i][j] == 0) {
                two[i][j] = 1000000;
                five[i][j] = 1000000;
                continue;
            }

            int x = matrix[i][j];

            while(x % 2 == 0) {
                two[i][j]++;
                x /= 2;
            }

            x = matrix[i][j];

            while(x % 5 == 0) {
                five[i][j]++;
                x /= 5;
            }
        }
    }

    dp2[0][0] = two[0][0];
    dp5[0][0] = five[0][0];

    for(int i = 1; i < n; ++i) {
        dp2[i][0] = dp2[i - 1][0] + two[i][0];
        dp5[i][0] = dp5[i - 1][0] + five[i][0];
    }

    for(int j = 1; j < n; ++j) {
        dp2[0][j] = dp2[0][j - 1] + two[0][j];
        dp5[0][j] = dp5[0][j - 1] + five[0][j];
    }

    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j) {
            dp2[i][j] = min(dp2[i - 1][j], dp2[i][j - 1]) + two[i][j];
            dp5[i][j] = min(dp5[i - 1][j], dp5[i][j - 1]) + five[i][j];
        }
    }

    int best;
    string ans;

    if(dp2[n - 1][n - 1] < dp5[n - 1][n - 1]) {
        best = dp2[n - 1][n - 1];

        int i = n - 1;
        int j = n - 1;

        while(i != 0 || j != 0) {
            if(i == 0) {
                ans.push_back('R');
                --j;
            }
            else if(j == 0) {
                ans.push_back('D');
                --i;
            }
            else if(dp2[i - 1][j] < dp2[i][j - 1]) {
                ans.push_back('D');
                --i;
            }
            else {
                ans.push_back('R');
                --j;
            }
        }

        reverse(ans.begin(), ans.end());
    }
    else {
        best = dp5[n - 1][n - 1];

        int i = n - 1;
        int j = n - 1;

        while(i != 0 || j != 0) {
            if(i == 0) {
                ans.push_back('R');
                --j;
            }
            else if(j == 0) {
                ans.push_back('D');
                --i;
            }
            else if(dp5[i - 1][j] < dp5[i][j - 1]) {
                ans.push_back('D');
                --i;
            }
            else {
                ans.push_back('R');
                --j;
            }
        }

        reverse(ans.begin(), ans.end());
    }

    if(zeroI != -1 && best > 1) {
        cout << 1 << '\n';

        for(int i = 0; i < zeroI; ++i)
            cout << 'D';

        for(int j = 0; j < zeroJ; ++j)
            cout << 'R';

        for(int i = zeroI; i < n - 1; ++i)
            cout << 'D';

        for(int j = zeroJ; j < n - 1; ++j)
            cout << 'R';
    }
    else {
        cout << best << '\n';
        cout << ans;
    }
    

    return 0;

}
