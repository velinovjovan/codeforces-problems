#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 500005;

int spf [MAX];
long long cnt [MAX];

void sito() {
    for (int i = 1 ; i < MAX ; ++i) {
        spf[i] = i;
    }
    
    for (int i = 2 ; i * i < MAX ; ++i) {
        if (spf[i] == i) {
            for (int j = i * i ; j < MAX ; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    sito();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
	    cin >> n >> x;
	    
	    vector<int> a(n);
	    vector<int> used;
	
	    for (int i = 0 ; i < n ; ++i) {
	        cin >> a[i];
	        int temp = a[i];
	        
	        while (temp > 1) {
	            int p = spf[temp];
	            int count = 0;
	            
	            while (temp % p == 0) {
	                count++;
	                temp /= p;
	            }
	            
	            if (!cnt[p]) {
	                used.push_back(p);
	            }
	            
	            cnt[p] = (cnt[p] + count) % MOD;
	        }
	    }
	
	    long long ans = 1;
	    
	    for (auto p : used) {
	        ans = (ans * (cnt[p] + 1)) % MOD;
	        cnt[p] = 0; 
	    }
	    
	    cout << ans << endl;
    }
    
    
    return 0;
    
}
