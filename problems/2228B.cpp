#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while (t--){
		int n, x1, x2, k;
		cin >> n >> x1 >> x2 >> k;
		
		int dist = min(abs(x1 - x2), n - abs(x1 - x2));
		
		if(n <= 3){
			cout << 1 << '\n';
		}
		else{
			cout << dist + k << '\n';
		}

	}
	
	
	return 0;
}
