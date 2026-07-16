#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        long long c;
        cin >> n >> c;
        
        vector<long long> a(n);
        for (int i = 0 ; i < n ; ++i) {
            cin >> a[i];
        }
    
        long long base = 0;
        for (int i = 0 ; i < n ; ++i) {
            base += (a[i] - c);
        }
    
        sort(a.begin(), a.end());
    
        int m = 0;
        for (int i = 0 ; i < n ; ++i) {
            if (a[i] < c) m++;
			else break;
        }
    
        int k = min(m, n / 2);
    
        long long ans = 0;
        for (int i = 0 ; i < k ; ++i) {
            ans += (c - a[i]);
        }
    
        cout << base + ans << "\n";    
    }
    
    return 0;
}
