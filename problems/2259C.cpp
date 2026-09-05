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
		
		vector<int> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		int i = 0;
		while(a[i] == 0){
			++i;
		}
		if(a[i] == -1) a[i] = 1;
		
		i = n - 1;
		while(a[i] == 0){
			--i;
		}
		if(a[i] == -1) a[i] = 1;
		
		for(auto &x : a){
			if(x == -1) x = 0;
		}
		
		for(auto &x : a){
			cout << x << ' ';
		}
		
		cout << "\n";
	}
	
	
	return 0;
}
