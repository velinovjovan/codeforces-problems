#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if(b == 0) return a;
	
	return gcd(b, a % b);
}

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
		
		cout << gcd(a[0], a[n -1]) << "\n";
	}
	
	
	return 0;
}
