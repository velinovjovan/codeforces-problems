#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
	    cin >> n >> k;
	    
	    string s, z;
	    cin >> s >> z;
	
	    long long x1 = 0;
		long long x2 = 0;
		long long x3 = 0;
	    
	    for (int i = 0; i < n; ++i) {
	        if (s[i] == '1') x1++;
	        if (z[i] == '1') x2++;
	        if (s[i] != z[i]) x3++; 
	    }
	
	    long long v1 = x1 * (n - x1);
	    long long v2 = x2 * (n - x2);
	    long long v3 = x3 * (n - x3);

	    long long period = ((1LL << k) + 1) / 3;
	    long long ans = period * (v1 + v2 + v3);
	    
	    
	    if (k % 2 == 0) ans += v1 + v2;
	    cout << ans << endl;
    }
    
    
    return 0;
    
}
