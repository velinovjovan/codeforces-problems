#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n, k;
		cin >> n >> k;
		
		int farms = n / k;
		
		string s;
		cin >> s;
		
		int ans = 0;
		
		for(int i = 0 ; i < farms ; ++i){
			int slobodno = 0;
			for(int j = 0 ; j < k ; ++j){
				if(s[i * k + j] == '0') slobodno++;
			}
			
			if(slobodno == 0){
				ans ++;
			}
		}
		
		cout << ans << "\n";
	}
	
	
	return 0;
}
