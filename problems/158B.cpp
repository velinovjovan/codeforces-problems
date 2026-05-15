#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> a (n);
	vector<int> sorted (4, 0);
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		sorted[--a[i]] ++;
	}
	
	int ans = 0;
	ans += sorted[3];
	
	ans += sorted[2];
	sorted[0] -= min(sorted[2], sorted[0]);
	
	sorted[1] += sorted[0]/2;
	ans += sorted[1]/2;
	sorted[1] %= 2;
	sorted[0] %= 2;
	
	if(sorted[0] || sorted[1]) ans ++;
	
	cout << ans;
	
	
	return 0;
	
}
