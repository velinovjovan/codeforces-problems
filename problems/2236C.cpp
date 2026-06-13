#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	
		long long a, b, x;
	    cin >> a >> b >> x;
	    
	    vector<long long> a_var;
	    a_var.reserve(30);
	    a_var.push_back(a);
	    
	    while (a > 0) {
	        a /= x;
	        a_var.push_back(a);
	    }
	    
	    
	    vector<long long> b_var;
	    b_var.reserve(30);
	    b_var.push_back(b);
	    
	    while (b > 0) {
	        b /= x;
	        b_var.push_back(b);
	    }
	    
	    
	    long long ans = -1;
	    
	    for (int i = 0 ; i < a_var.size() ; ++i) {
	        for (int j = 0 ; j < b_var.size() ; ++j) {
	        	
	            long long ops = i + j + abs(a_var[i] - b_var[j]);
	            if (ans == -1 || ops < ans) {
	                ans = ops;
	            }
	        }
	    }
	    
	    cout << ans << endl;    	
	}
	
	
    return 0;

}
