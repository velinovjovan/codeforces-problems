#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n, q;
	    cin >> n >> q;
	    
	    string s;
	    cin >> s;
	
	    vector<int> a1(n + 1, 0);
		vector<int> a2(n + 1, 0);
		
		char c1 = '0';
		char c2 = '1';
	    
	    for (int i = 0 ; i < n ; ++i) {
	        if (s[i] != c1) a1[i + 1] = 1;
	        if (s[i] != c2) a2[i + 1] = 1;
	        
	        swap(c1, c2);
	    }
	
	    vector<int> pref1(n + 1, 0);
		vector<int> pref2(n + 1, 0);
		
	    for (int i = 1 ; i <= n ; ++i) {  	
	    	pref1[i] = pref1[i - 1];
	    	if(a1[i] == 1 && a1[i - 1] == 0){
	    		pref1[i] ++;
			}
			
			pref2[i] = pref2[i - 1];
			if(a2[i] == 1 && a2[i - 1] == 0){
				pref2[i] ++;
			}
	    }
	
	    for (int i = 0 ; i < q ; ++i) {
	        int l, r, k;
	        cin >> l >> r >> k;
	        
	        int ans1 = a1[l] + pref1[r] - pref1[l];
	        int ans2 = a2[l] + pref2[r] - pref2[l];
	        
	        if (min(ans1, ans2) <= k) cout << "YES" << endl;
			else cout << "NO" << endl;
    	}
	}
	
	
    return 0;

}
