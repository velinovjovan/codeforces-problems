#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int zero = 0;
		vector<int> a (n);
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
			if(a[i] == 0) zero++;
		}
		
		if(zero < 2){
			cout << -1 << "\n";
			continue;
		}
		
		int ans = 0;
		
		if(a[0] == 1) ans ++;
		if(a[n - 1] == 1) ans ++;
		
		cout << ans << "\n";
	}
	
	return 0;
}
