#include<bits/stdc++.h>

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
	    
	    vector<long long> a(n);
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	    }
	    vector<long long> b(n);
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> b[i];
	    }
	
	    vector<bool> visited(n, false);
	    vector<int> p(n);
	    bool flag = false;
	
	    for (int j = 0; j < n; ++j) {
	        int it = -1;
	        
	        for (int i = 0; i < n; ++i) {
	            if (!visited[i] && a[i] <= b[j]) {
	                it = i;
	                break;
	            }
	        }
	        
	        if (it == -1) {
	            flag = true;
	            break;
	        }
	        
	        visited[it] = true;
	        p[it] = j;
	    }
	
	    if (flag) {
	        cout << -1 << endl;
	        continue;
	    }
	
	    long long ans = 0;
	    
	    for (int i = 0 ; i < n ; ++i) {
	        for (int j = i + 1 ; j < n ; ++j) {
	            if (p[i] > p[j]) {
	                ++ans;
	            }
	        }
	    }
	
	    cout << ans << endl;
	}
	
    
    return 0;

}
