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
	    
	    vector<long long> a(n + 1);
	    
	    for(int i = 1 ; i <= n ; ++i) {
	        cin >> a[i];
	    }
	    
	    vector<int> diff (n + 2, 0);
	    
	    for(int i = 1 ; i <= n; ++i){
	        long long levi = i * a[i];
	        long long desni = min(i * a[i] + i - 1, (long long)n - 1);
	        
	        if(levi < n){
	        	diff[levi] ++;
	        	diff[desni + 1] --;
			}
	    }
	    
	    vector<int> ans;
	    
	    int curr = 0;	    
	    for(int i = 0 ; i < n; ++i) {
	        curr += diff[i];  
	    	if(curr == 0) ans.push_back(i);
	    }
	    
	    cout << ans.size() << "\n";
	    
	    for(auto &x : ans){
	    	cout << x << ' ';
		}
	    cout << "\n";
    }
    
    return 0;
}
