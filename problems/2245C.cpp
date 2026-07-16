#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
	    long long k;
	    cin >> n >> k;
	    
	    if (n == 1) {
	        if (k == 1) cout << "YES\n0\n";    
			else cout << "NO\n";
	        
	        continue;
	    }
	    
	    
	    long long L = 1;
	    while (L <= n - 1) L *= 2;
	    
	    long long x = k ^ n;
	    if (x >= L) {
	        cout << "NO\n";
	        continue;
	    }
	    cout << "YES\n";
	    
	    vector<int> F(n, 0);
	    F[n - 1] = n;
	    
	    
	    if (x > 0 && x <= n - 1) {
	        F[n - 2] = x;
	    } 
		else if (x > n - 1) {
	        long long M = 1;
	        
	        while (M * 2 <= x) {
	            M *= 2;
	        }
	        
	        F[n - 3] = x ^ M;
	        F[n - 2] = M;
	    }
	    
	    vector<int> p(n, -1);
	    vector<bool> used(n, false);
	    int prev = 0;
	    
	    for (int i = 0 ; i < n ; ++i) {
	        if (F[i] > prev) {
	            p[i] = prev;
	            used[prev] = true;
	            prev = F[i];
	        }
	    }
	    
	    int next = 0;
	    for (int i = 0 ; i < n ; ++i) {
	        if (p[i] == -1) {
	            while (used[next]) next++;
	            
	            p[i] = next;
	            used[next] = true;
	        }
	    }
	    
	    for (int i = 0 ; i < n ; ++i) cout << p[i] << ' ';
	    cout << "\n";
    }
    
    
    return 0;
    
}
