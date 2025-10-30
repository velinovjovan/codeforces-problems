#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,sum=0;
	cin >> n;
	
	vector<int> a (n);
	
	for(int i=0;i<n;i++) {
		cin >> a[i];
		sum+= a[i];
	}
	
	sort(a.begin(), a.end(), greater<int>());

	int ans = 0;
	
	for(int i=0;i<n;i++){
		
		ans+= a[i];
		
		if(sum < ans * 2){
			cout << i + 1;
			return 0;
		}
	}
}