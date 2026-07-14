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
		
		vector<long long> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		long long curr = 0;
		bool flag = false;
		
		for(int i = 0 ; i < n ; ++i){
			a[i] += curr;
			
			if(a[i] - (i + 1) < 0){
				flag = true;
				cout << "NO" << endl;
				break;
			}
			
			curr = a[i] - (i + 1); 
		}
		
		if(!flag){
			cout << "YES" << endl;
		}
	}
	
	
	return 0;
	
}
