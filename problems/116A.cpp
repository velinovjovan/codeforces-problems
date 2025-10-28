#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int a,b,maxCap = 0;
	int curr = 0;
	
	while(n--){
		cin >> a >> b;	
		curr = curr - a + b;
		maxCap = max(maxCap, curr);
	}	
	
	cout << maxCap;
	
	
	return 0;
}
