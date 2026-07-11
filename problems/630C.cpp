#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n;
	cin >> n;
	
	long long res = 1;
	long long a = 2;
	++n;
	
	while(n){
		if(n&1){
			res = res * a;
		}
		
		a = a * a;
		n = n >> 1;
	}
	
	cout << res - 2	;
	
	
	return 0;
}
