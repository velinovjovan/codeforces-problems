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
		
		vector<long long> arr (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> arr[i];
		}
		
		
		long long maks = 0;
		bool flag = false;
		long long last = arr[0];
		for(int i = 1 ; i < n ; ++i){
			if(arr[i] < last){
				maks = max(maks, last - arr[i]);
			}
			else{
				last = arr[i];
			}
			
		}
		
		for(int i = 1 ; i < n ; ++i){
			if(arr[i] < arr[i - 1]){
				arr[i] += maks;
				if(arr[i] < arr[i - 1]){
					cout << "NO" << '\n';
					flag = true;
					break;
				}
			}
		}
		
		
		if(!flag) cout << "YES" << '\n';
	}
	
	
	return 0;
	
}
