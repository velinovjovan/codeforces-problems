#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n, m;
	    cin >> n >> m;
	    
	    vector<int> freq(m + 1, 0);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        int a;
	        cin >> a;
	        freq[a]++;
	    }
	    
	    vector<int> suf(m + 2, 0);
	    
	    for (int i = m ; i >= 1 ; --i) {
	        suf[i] = suf[i + 1] + freq[i];
	    }
	    
	    int ans = 0;
	    int curr;
	    
	    for (int i = 1 ; i <= m ; ++i) {
	        curr = suf[i];
	        
	        if (2 * i <= m) curr += freq[2 * i];
	        ans = max(ans, curr);
	    }
	    
	    cout << ans << "\n";	
	}
	
	
    return 0;
}
