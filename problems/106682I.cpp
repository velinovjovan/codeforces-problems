#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, k;
	cin >> n >> k;
	
	if(k == 1){
		cout << 'S' << "\n";
	}
	else if(n > 2){
		cout << 'N' << "\n";
	}
	else{
		if(k & 1) cout << 'S' << "\n";
		else cout << 'N' << "\n"; 
	}
	
	return 0;
}
