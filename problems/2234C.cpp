#include <bits/stdc++.h>

using namespace std;

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> h(n);
        
        for(int i = 0; i < n; ++i){
        	cin >> h[i];
		}
        
        vector<vector<long long>> desno(n, vector<long long>(n, 0));
        
        for(int i = 0; i < n; ++i){
            long long curr = 0;
            for(int j = 1; j < n; j++){
                curr = max(curr, h[(i+j-1)%n]);
                desno[i][j] = curr;
            }
        }
        
        vector<vector<long long>> levo(n, vector<long long>(n, 0));
        
        for(int i = 0; i < n; ++i){
            long long curr = 0;
            for(int j = 1; j < n; j++){
                curr = max(curr, h[((i-j)%n+n)%n]);
                levo[i][j] = curr;
            }
        }
        
        for(int i = 0; i < n; ++i){
        	
            long long ans = 0;
            for(int j = 1; j < n; j++){
                ans += min(desno[i][j], levo[i][n-j]);
            }
            
            cout << ans << ' ';
        }
        
        cout << endl;
    }
    
    
    return 0;

}
