#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> x(n);
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }

    vector<long long> y(n);
    for(int i = 0; i < n; ++i){
        cin >> y[i];
    }

    long long ans = 0;

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            ans = max(ans, (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
        }
    }

    cout << ans;

    return 0;
}
