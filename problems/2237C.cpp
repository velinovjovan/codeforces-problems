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
		
		vector<long long> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		
		long long ans = a[0];
		for(int i = 1 ; i < n ; ++i){
			
			if(a[i] < ans){
				ans+= a[i];
			}
			else{
				ans = max(ans, a[i]);
			}
		}
		
		
		cout << ans << endl;
	}
	
	
	return 0;
	
}
