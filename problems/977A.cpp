#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num,k;
	
	cin >> num >> k;
	
	while(k){
		if(num%10){
			int temp = min(num%10,k);
			num-= temp;
			k-= temp;
		}
		else{
			num/=10;
			k--;
		}
	}	
	
	cout << num;
	
	
	return 0;
}
