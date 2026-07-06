#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n;
	    long long k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	    }
	    
	    vector<long long> c;
	    c.push_back(0);
	    
	    int curr = 1;
	    for (int i = 1 ; i < n ; ++i) {
	        if (a[i] == a[i - 1]) {
	            curr++;
	        }
			else{
	            c.push_back(curr);
	            curr = 1;
	        }
	    }
	    c.push_back(curr);
	    
	    sort(c.begin() + 1, c.end());
	    
	    int m = c.size() - 1;
	    vector<long long> pref(m + 1, 0);
	    
	    for (int i = 1 ; i <= m ; ++i) {
	        pref[i] = pref[i - 1] + c[i];
	    }
	    
	    int ans = 0;
	    
	    for (int p = 0 ; p < m ; ++p) {
	        long long cnt = m - p;
	        long long sum = pref[m] - pref[p];	        
	        long long diff = k - sum;
	        

	        if (diff % cnt != 0) continue;
	        
	        long long S = diff / cnt;

	        if (max(c[p], -S) < c[p + 1]) {
	            ans++;
	        }
	    }
	    
	    cout << ans << endl;	
	}
	
	
    return 0;
    
}
