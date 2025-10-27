#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k,n,w;
	cin >> k >> n >> w;
	
	int res = (k*(w+1)/2.0)*w;
	
	if(res < n) cout << 0;
	else cout << res - n;
	
	
	return 0;
}
