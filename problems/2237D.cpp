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
	    
	    string s;
	    cin >> s;
	
	    vector<long long> count(3, 0);
	    count[0] = 1;
	    long long curr = 0;
	
	    for (int i = 0 ; i < n ; ++i) {
	        if (s[i] == '0') curr = (curr + 1) % 3;
	        else curr = (curr + 2) % 3;
	        
	        count[curr]++;
	    }
	
	    long long total = (long long)n * (n + 1) / 2;
	    long long zerosum = 0;
	    
	    for (int i = 0 ; i < 3 ; ++i) {
	        zerosum += count[i] * (count[i] - 1) / 2;
	    }
	
	    long long odd = 0;
	    long long curr_alt = 1;
	    
	    for (int i = 1 ; i < n ; ++i) {
	        if (s[i] != s[i - 1]) curr_alt++;
	        else {
	            long long k = (curr_alt - 1) / 2;
	            odd += k * (curr_alt - k - 1);
	            curr_alt = 1;
	        }
	    }
	    
	    long long k = (curr_alt - 1) / 2;
	    odd += k * (curr_alt - k - 1);
	    
	
	    cout << total - zerosum - odd << endl;	
	}
	
	
    return 0;

}
