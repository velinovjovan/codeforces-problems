#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n;
	    cin >> n;
	    
	    vector<int> b(n);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> b[i];
	    }
	
	    vector<int> nesme(n + 1, 0);
	    
	    for (int i = 0 ; i < n ; ++i) {
	        if(b[i] == -1) continue; 
	        
	        int l = max(0, i - b[i] + 1);
			int r = min(n - 1, i + b[i] - 1);
			
			
			if (l <= r) {
			    nesme[l]++;
			    nesme[r + 1]--;
			}
	    }
	
	    string ans (n, '0');	    
	    int curr = 0;
	    
	    bool flag = false;
	    for (int i = 0 ; i < n ; ++i) {
	        curr += nesme[i];
	        if (curr == 0) {
	            ans[i] = '1';
	            flag = true;
	        }
	    }
	
	    if(!flag){
	    	cout << -1 << "\n";
	    	continue;
		}
	
	    vector<int> test (n, numeric_limits<int>::max());
	    
		curr = numeric_limits<int>::min();
		for (int i = n - 1 ; i >= 0 ; --i) {
	        if (ans[i] == '1') curr = i;
	        
	        if(curr == numeric_limits<int>::min()) continue;
	        test[i] = curr - i;
	    }
	    
	    curr = numeric_limits<int>::min();
	    for (int i = 0 ; i < n ; ++i) {
	        if (ans[i] == '1') curr = i;
	        
	        if(curr == numeric_limits<int>::min()) continue;
	        test[i] = min(test[i], i - curr);
	    }    
	
	
		flag = false;
	    for (int i = 0 ; i < n ; ++i) {
	    	if(b[i] != -1){
	    		if(b[i] != test[i]){
	    			flag = true;
				}
			}
	    }
	
	   if(flag) cout << -1 << "\n";
	   else cout << ans << "\n";
	}
	
	
	return 0;
}
