#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	vector<int> b (n);
	
	for(int i = 0 ; i < n ; ++i){
		cin >> b[i];
	}
	
	for(int i = 0 ; i < n ; ++i){
		b[i] = (b[i] * 5) % 9;
	}
	
	for(auto &x : b){
		cout << x << ' ';
	}
	
	return 0;
}
