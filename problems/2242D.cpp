#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
    	string a, b;
	    cin >> a >> b;
	
	    int n = a.length();
	    int m = b.length();
	
	    vector<int> pa(n);
	    vector<int> pb(m);
	
	    pa[0] = (a[0] - '0') % 10;
	    for (int i = 1 ; i < n ; ++i) {
	        pa[i] = (pa[i - 1] + (a[i] - '0')) % 10;
	    }
	
	    pb[0] = (b[0] - '0') % 10;
	    for (int j = 1 ; j < m ; ++j) {
	        pb[j] = (pb[j - 1] + (b[j] - '0')) % 10;
	    }
	
	    if (pa.back() != pb.back()) {
	        cout << -1 << endl;
	        continue;
	    }
	
	    vector<int> dp(m + 1, 0);
	
	    for (int i = 1 ; i <= n ; ++i) {
	    	
	        int prev = 0;
	        for (int j = 1 ; j <= m ; ++j) {
	        	
	            int temp = dp[j];
	            if (pa[i - 1] == pb[j - 1]) {
	                dp[j] = prev + 1;
	            }
				else {
	                dp[j] = max(dp[j], dp[j - 1]);
	            }
	            
	            prev = temp;
	        }
	    }
	
	    cout << dp[m] << endl;
	}
	
	
    return 0;

}
