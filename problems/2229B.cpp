#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for(int i = 0 ; i < n ; ++i){
            cin >> a[i];
        }

        for(int i = 0 ; i < n ; ++i){
            cin >> b[i];
        }

        long long sum = 0;
        long long best_min = 0;

        for(int i = 0 ; i < n ; ++i){
            long long maks = max(a[i], b[i]);
            long long mini = min(a[i], b[i]);

            sum += maks;
            best_min = max(best_min, mini);
        }

        cout << sum + best_min << "\n";
    }

    return 0;
}
