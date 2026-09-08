#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	long long x, y, k;
	    cin >> x >> y >> k;
	    long long diff = y - x;
	    
	    long long ans = 0;
	    long long maks = min(diff, x + k - 1);
	    
	    for (long long j = x; j <= maks; ++j){
	    	ans = ans + diff % j;
		}
	
	    long long min = max(diff + 1, x);
	    maks = x + k - 1;
	    
	    if (min <= maks + 1) ans += diff * (maks - min + 1);
	    
	    
	    cout << ans << "\n";
	}
    return 0;
}
