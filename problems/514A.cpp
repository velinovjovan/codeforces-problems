#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long t;
	cin >> t;
	
	long long ans = 0;
	long long st = 1;
	char temp;
	
	while(t){
		temp = t%10;
		
		if(temp > 4 && t!= 9) temp = 9 - temp;
		ans += temp*st;
		st *= 10;
		t /= 10;
	}
	
	cout << ans;
	
	
	return 0;
	
}
