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
		
		sort(a.begin(), a.end(), greater<int> ());
		
		bool flag = false;
		
		for(int i = 2 ; i < n ; ++i){
			if(a[i] != a[i-2] % a[i-1])
				flag = true;
		}
		
		if(flag) cout << -1 << endl;
		else cout << a[0] << ' ' << a[1] << endl;
	}
	
	
	return 0;
	
}
