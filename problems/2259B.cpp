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
		
		int brNeparni = 0;
		int brParni1 = 0;
		int brParni2 = 0;
		
		for(int i = 0 ; i < n ; ++i){
			if(a[i]&1) brNeparni ++;
			else{
				if((a[i]/2)&1) brParni1 ++;
				else brParni2 ++;
			}
		}
		
		cout << max({brNeparni, brParni1, brParni2}) << "\n";
	}
	
	return 0;
}
