#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	
	int sum;
	
	for(int i = 0 ; i < (1 << n) ; ++i){
		
		sum = 0;
		for (int j = 0 ; j < n ; ++j){
			if((i & (1 << j)) == 0) sum += a[j];
			else sum -= a[j];
		}
		
		if(sum % 360 == 0){
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	
	return 0;
}
