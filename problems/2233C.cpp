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
	    
	    string s;
	    cin >> s;
	
	    vector<int> pref(n + 1, 0);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        pref[i + 1] = pref[i];
	        
	        if(s[i] == '(') pref[i + 1] ++;
	    }
	
	    vector<int> suff(n + 1, 0);
	    
	    for (int i = n - 1 ; i >= 0 ; --i) {
	        suff[i] = suff[i + 1];
	        
	        if(s[i] == ')') suff[i] ++;
	    }
	
	    int min = 1e9;
	    int opt = -1;
	    
	    for (int i = 0 ; i <= n ; ++i) {
	        int x = pref[i] + suff[i];
	        if (x < min) {
	            min = x;
	            opt = i;
	        }
	    }
	
	    string ans(n, '0');
	    int del = 0;
	
	    for (int i = 0 ; i < opt ; ++i) {
	        if (del < k && s[i] == '(') {
	            ans[i] = '1';
	        	++del;
	        }
	    }
	    
	    for (int i = opt; i < n; ++i) {
	        if (del < k && s[i] == ')') {
	            ans[i] = '1';
	            ++del;
	        }
	    }
	
	    cout << ans << endl;
    }
    
    
    return 0;

}
