#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<int> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];	
		}
		
		sort(a.begin(), a.end());
		
		int median = a[n/2];
		int lower = 0;
		int upper = 0;
		
		for(int i = 0 ; i < n ; ++i){
			if(a[i] < median) ++lower;
			if(a[i] > median) ++upper;
		}
		
		cout << max(lower,upper) << endl;
	}
	
	
	return 0;
}
