#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n, k;
		cin >> n >> k;
		
		string s;
		cin >> s;
		
		for(int i = 0 ; i < n - k ; ++i){
			if(s[i] == '1'){
				s[i] = '0';
				if(s[i + k] == '1') s[i + k] = '0';
				else s[i + k] = '1'; 
			}
		}
		
		int ans = 0;
		
		for(int i = 0 ; i < n ; ++i){
			ans += s[i] - '0';
		}
		
		if(!ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	
	return 0;
	
}
