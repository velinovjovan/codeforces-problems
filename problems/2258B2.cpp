#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<int> freq(m + 1, 0);
        long long sum = 0;
        
        for(int j = 0; j < n; ++j){
            int temp;
            cin >> temp;
            
            freq[temp]++;
            sum += temp;
        }
        
        vector<int> prefix(m + 1, 0);
        
        for(int i = 1; i <= m; ++i){
            prefix[i] = prefix[i - 1] + freq[i];
        }
        
        int logm = 0;
        long long temp = 1;
        while(temp <= m) {
        	++logm;
        	temp <<= 1;
		}
        
        for(int k = 1 ; k < logm ; ++k){
            
            long long ans = 0;
            long long slices = (1LL << k) - 1; 
            
            for(int i = 1 ; i <= m ; ++i){
                long long curr = 0;
                
                for(int j = 1 ; j < slices ; ++j){
                    int start = j * i;
                    if(start > m) break;
                    int end = min(m, start + i - 1);
                    
                    curr += j * (prefix[end] - prefix[start - 1]);
                }
                
                long long maks = slices * i;
                if(maks <= m){
                    int count = prefix[m] - prefix[maks - 1];
                    curr += slices * count;
                    
                }
                
                long long tacno = (slices + 1) * i;
                if(tacno <= m){
                	curr += freq[tacno];
                }
                
               ans = max(ans, curr);
            }
            
            cout << ans << ' ';
        }
        
        for(int k = logm ; k <= m ; ++k){
        	cout << sum << ' ';
		}
        
        cout << "\n";
    }
    
    return 0;
}
