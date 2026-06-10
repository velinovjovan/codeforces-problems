#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		int n, x, y, z;
		cin >> n >> x >> y >> z;

		int withoutAI = n / (x + y);
		if(n % (x + y)) ++withoutAI;

		int withAI;

		if(z * x >= n){
			withAI = n / x;
			if(n % x) ++withAI;
		}
		else{
			int rem = n - z * x;

			withAI = z + rem / (x + 10 * y);
			if(rem % (x + 10 * y)) ++withAI;
		}

		cout << min(withoutAI, withAI) << endl;
	}

	return 0;
}

