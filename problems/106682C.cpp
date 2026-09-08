#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    long long bestA = -2e18; 
    long long bestB = 2e18;
    
    for (int i = n - 1; i >= 0; --i) {
        long long valA, valB;
        
        if (i == n - 1) {
            valA = a[i];
            valB = b[i];
        } 
		else {
            valA = min(max(a[i], bestA), bestB);
            valB = max(min(b[i], bestB), bestA);
        }
        
        bestA = max(bestA, valA);
        bestB = min(bestB, valB);
    }
    
    long long ans = max(min(0LL, bestB), bestA);
    
    cout << ans << "\n";
    
    return 0;
}
