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
		
		vector<int> candy (2, 0);
		int temp;
		
		for(int i = 0 ; i < n ; ++i){
			cin >> temp;
			candy[--temp] ++;
		}
		
		candy[1] = candy[1]%2;
		candy[0] -= candy[1] * 2;
		
		if(candy[0] < 0) cout << "NO" << '\n';
		else if(candy[0] % 2 == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	
	
	return 0;
	
}
