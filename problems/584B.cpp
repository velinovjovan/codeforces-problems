#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	int b = 3 * n;
	long long res1 = 1;
	long long a = 3;
	
	while(b){
		if(b&1){
			res1 = res1 * a;
			res1 = res1 % mod;
		}
		
		a = a * a;
		a = a % mod;
		b = b >> 1;
	}
	
	
	a = 7;
	long long res2 = 1;
	
	while(n){
		if(n&1){
			res2 = res2 * a;
			res2 = res2 % mod;
		}
		
		a = a * a;
		a = a % mod;
		n = n >> 1;
	}

	cout << ((mod + res1) - res2 ) % mod;
	
	return 0;
}
