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
	    
	    vector<long long> a(n);
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	    }
	    
	    vector<int> b(m);
	    for (int i = 0 ; i < m ; ++i) {
	        cin >> b[i];
	    }
	    
	    sort(b.begin(), b.end());
	    
	    long long ans = 0;
	    int last = 0;
	    
	    for (int i = 0 ; i < m ; ++i) {
	        int curr = b[i]; 
	        long long sum= 0;
	        
	        for (int j = last ; j < curr ; ++j) {
	            sum += a[j];
	        }
	
	        ans += abs(sum);
	        last = curr;
	    }
	    
	    for (int j = last ; j < n ; ++j) {
	        ans += a[j];
	    }
	    
	    cout << ans << endl;
	}
	
    
    return 0;
}
