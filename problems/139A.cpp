#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0;
	cin >> n;
	vector<int> a (7);
	for(int i=0;i<7;i++){
		cin >> a[i];
		sum += a[i];
	}
	
	n = n%sum;
	if (n == 0){
		if (a[6] != 0) cout << 7;
		else if (a[5] != 0) cout << 6;
		else if (a[4] != 0) cout << 5;
		else if (a[3] != 0) cout << 4;
		else if (a[2] != 0) cout << 3;
		else if (a[1] != 0) cout << 2;
		else cout << 1;
		return 0;
	}
	
	
	for(int i=0; i<7;i++){
		if(n <= a[i]){
			cout << i+1;
			break;
		}
		else{
			n = n-a[i];
		}
	}
	
	return 0;
}
