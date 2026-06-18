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
		
		vector<int> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		int curr = a[0];
		for(int i = 1 ; i < n ; ++i){
			if(a[i] < curr){
				curr = a[i];
			}
			
			a[i] = curr;
		}
		
		int ans = 0;
		
		for(int i = 0 ; i < n ; ++i){
			ans += a[i];
		}
		
		
		cout << ans << endl;
	}
	
	
	return 0;
}
