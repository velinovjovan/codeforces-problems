#include<bits/stdc++.h>

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
		
		vector<int> h (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> h[i];
		}
		
		int maks = h[0];
		
		for(int i = 1 ; i < n ; ++i){
			maks = max(maks, h[i]);
		}
		
		int ans = 0;
		
		for(int i = 0 ; i < n ; ++i){
			ans = max(maks - h[i], ans);
		}
		
		cout << ans + 1 << endl;
	}
	
	
	return 0;
	
}
