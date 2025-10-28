#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,h,temp;
	cin >> n >> h;
	
	int ans = n;
	for(int i=0;i<n;i++){
		cin >> temp;
		if(temp > h) ans++;
	}
	
	cout << ans;
	
	
	
	return 0;
}
