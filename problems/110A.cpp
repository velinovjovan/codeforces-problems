#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	cin >> n;
	
	int count = 0;
	while(n){
		if(n%10 == 7 || n%10 == 4) count ++;
		n/=10;
	}	
	
	if(count == 0){
		cout << "NO";
		return 0;
	}
	
	while(count){
		if(count%10 == 7 || count%10 == 4) count/= 10;
		else{
			cout << "NO";
			return 0;
		}
	}
	
	cout << "YES";
	
	
	return 0;
}
