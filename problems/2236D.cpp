#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
	    int n, k;
	   	cin >> n >> k;
	    
	    vector<int> a (n);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	    }
	    
	    sort(a.begin(), a.end());
	    
	    vector<int> v;
	    vector<int> cnt;
	    
	    for (int i = 0 ; i < n ; ++i) {
	        if (v.empty() || a[i] != v.back()) {
	            v.push_back(a[i]);
	            cnt.push_back(1);
	        } else {
	            cnt.back()++;
	        }
	    }
	    
	    int last_l = -1; 
	    bool egor = false;
	    
	    for (int i = v.size() - 1 ; i >= 0 ; --i) {
	        bool l_reach = false;
	        
	        if (last_l != -1) {
	            if (v[last_l] - v[i] <= k) {
	                l_reach = true;
	            }
	        }
	        
	        int l = 0;
	        
	        if (l_reach) l = 0; 
	        else l = (cnt[i] % 2 == 1) ? 1 : 0;
	        
	        
	        if (l == 1) last_l = i;
	        else egor = true;
	        
	    }
	    
	    if (egor) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	
	
    return 0;

}
