#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> a (n + 1);
        for(int i = 1 ; i <= n ; ++i){
            cin >> a[i];
        }
        
        vector<int> diff (n + 2, 0);
        
        for(int i = 1 ; i <= n ; ++i){
            long long levi = i * a[i];
            long long desni = min(i * a[i] + i - 1, (long long)n - 1);
            
            if(levi < n) {
                diff[levi]++;
                diff[desni + 1]--;
            }
        }
        
        
        vector<int> pos (n, 0);
        int m = 0;
        
        vector<bool> allowed (n, false);
        int curr = 0;
        
        for(int i = 0 ; i < n ; ++i){
            curr += diff[i];
            
            if (curr == 0) {
            	m ++;
            	pos[i] = m;
                allowed[i] = true; 
            }
        }    
        
    	vector<int> prev (n + 1, 0);
    	
        for(int i = 0 ; i < n ; ++i){
            if(allowed[i]) {
                prev[i] = pos[i];
            } 
			else{
                if(i == 0) prev[i] = 0;
                else prev[i] = prev[i - 1];
            }
        }

        vector<int> next (n + 1, m + 1);
        
        for(int i = n - 1; i >= 0; --i){
            if(allowed[i]) {
                next[i] = pos[i];
            } 
			else{
                next[i] = next[i + 1];
            }
        }  
        
        vector<int> maks (m + 2, 0);
        
        for (int k = 1 ; k <= n ; ++k){
            
			for (int i = 0 ; i < a[k] ; ++i){
                long long levi = i * k;
                long long desni = min((long long)n - 1, 1LL * (i + 1) * k - 1);
                
                if (levi >= n) break;        
                if (next[levi] <= prev[desni]) {
                    maks[prev[desni]] = max(maks[prev[desni]], next[levi]);
                }
            }
        }
        
        int ans = 0;
        
        vector<int> dp (m + 2, 0);
        dp[0] = 1;
        
        vector<int> pref (m + 2, 0);
        pref[0] = 1;
        
        for(int i = 1 ; i <= m + 1 ; ++i){
            ans = max(ans, maks[i - 1]);
            int diff;
            
            if(ans > 0){
            	diff = pref[ans - 1];
			}
			else{
				diff = 0;
			}

            dp[i] = (pref[i - 1] - diff + MOD) % MOD;
            pref[i] = (pref[i - 1] + dp[i]) % MOD;
        }
        
        cout << dp[m + 1] << "\n";
    }
    
    
    return 0;
    
}
