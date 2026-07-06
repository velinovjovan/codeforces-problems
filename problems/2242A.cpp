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
		
		int ans1 = 0;
		int ans2 = 0;
		
		int temp;
		for(int i = 0 ; i < n ; ++i){
			cin >> temp;
			if(temp >= 2){
				ans1++;
			}
			
			if(temp > 2){
				ans2 ++;
			}
		}
		
		if(ans1 >= 2  || ans2 > 0){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
	
	return 0;
	
}
