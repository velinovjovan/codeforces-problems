#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	int n,br=0;
	
	cin >> n;
	
	while(n--){
		cin >> a >> b >> c;
		
		if(a+b+c > 1) br++;
	} 
	
	cout << br;
	
	return 0;
}
