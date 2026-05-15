#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n;
	cin >> n;
	
	int curr = 0;
	int bills [] = {100, 20, 10, 5, 1};
	int ans = 0;
	
	while(n > 0){
		
		if(n >= bills[curr]){
			ans ++;
			n-= bills[curr];
		} 
		else curr++;
	}
	
	cout << ans;
	
	
	return 0;
	
}
