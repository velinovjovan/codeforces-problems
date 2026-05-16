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
		
		int nula = 0;
		int jedan = 0;
		int dva = 0;
		int temp;
		for(int i = 0 ; i < n ; ++i){
			cin >> temp;
			if(temp == 0) nula++;
			else if(temp == 1) jedan++;
			else if(temp == 2) dva++;
		}
		
		int pairs = min(jedan, dva);
		jedan -= pairs;
		dva -= pairs; 
		
		cout << nula + jedan/3 + dva/3 + pairs << '\n';
	}
	
	
	return 0;
}
