#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k,br=0;
	cin >> n >> k;
	
	vector<int> a (n+1);
	
	for(int i=1;i<=k;i++){
		cin >> a[i];
		if(a[i]) br++;
	}
	
	for(int i=k+1;i<=n;i++){
		cin >> a[i];
		if(a[i] == a[k] && a[i]) br++;
	}
	
	cout << br;
	
	
	return 0;
}
