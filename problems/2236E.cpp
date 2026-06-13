#include<bits/stdc++.h>
#define INF  1e9

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	    }
	
	    int max_size = (n + 2) * (n + 2);
	    
	    vector<int> min_R(max_size, INF);
	    vector<int> max_L(max_size, -INF);
	    
	    vector<int> seen(n + 1, 0);
	    
	
	    for (int i = 0 ; i < n ; ++i) {
	    	
	        int mn = a[i], mx = a[i];
	        for (int j = i ; j < n ; ++j) {
	           	
	            if (seen[a[j]] == i + 1) break;
	            seen[a[j]] = i + 1;
	            
	            if (a[j] < mn) mn = a[j];
	            if (a[j] > mx) mx = a[j];
	            
	            int K = j - i + 1;
	            
	            if (mx - mn == K - 1) {
	                int idx = K * (n + 2) + mn;
	                if (j < min_R[idx]) min_R[idx] = j;
	                if (i > max_L[idx]) max_L[idx] = i;
	            }
	        }
	    }
	
	    int ans = 0;
	    for (int K = n / 2 ; K >= 1 ; --K) {
	        bool found = false;
	        
	        for (int V = 1 ; V + 2 * K - 1 <= n ; ++V) {
	            int idx1 = K * (n + 2) + V;
	            int idx2 = K * (n + 2) + V + K;
	            
	            
	            if (min_R[idx1] == INF || min_R[idx2] == INF) continue;
	            
	            if (min_R[idx1] < max_L[idx2] || min_R[idx2] < max_L[idx1]) {
	                found = true;
	                break;
	            }
	        }
	        if (found) {
	            ans = K;
	            break;
	        }
	    }
	    
	    cout << ans << endl;
	}
	
	
    return 0;
    
}
