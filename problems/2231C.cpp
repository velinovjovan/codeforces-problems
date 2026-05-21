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
		unordered_map<int, pair<int,int>> mapa;
		mapa.reserve(32 * n);
		
		int temp;
		
		for(int i = 0 ; i < n ; ++i){
			cin >> temp;
			int prev = 3;
			
			int op = 0;
			while(temp > 0){
				mapa[temp].first ++;
				mapa[temp].second += op;
				
				if(temp == 1){
					if(prev == 2) break;
					else{
						mapa[2].first ++;
						mapa[2].second += op + 1;
						break;
					}
				}
				
				prev = temp;
				
				if(temp&1) ++temp;
				else temp /= 2;
			
				++op;
			}	
		}
		
		
		int total = INT_MAX;
		
		for(auto x : mapa){
			if(x.second.first == n){
				total = min(total, x.second.second);
			}
		}
		
		cout << total << '\n';	
	}
	
	return 0;
	
}
