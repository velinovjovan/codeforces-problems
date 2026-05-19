#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<int> a (n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		bool sign;
		if(a[0] < 0) sign = true;
		if(a[0] > 0) sign = false;
		int curr = a[0];
		long long sum = a[0];
		
		for(int i = 1 ; i < n ; ++i){
			if(a[i] > 0){
				if(sign){
					curr = a[i];
					sum+= a[i];
					sign = false;
				}
				else{
					if(curr < a[i]){
						sum-=curr;
						sum+=a[i];
						curr = a[i];
					}
				}
			}
			else{
				if(sign){
					if(curr < a[i]){
						sum-=curr;
						sum+=a[i];
						curr = a[i];
					}
				}
				else{
					curr = a[i];
					sum+= a[i];
					sign = true;
				}
			}
		}
		
		cout << sum << '\n';
	}
	
	
	return 0;
	
}
