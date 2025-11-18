#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--){
		int a,b,c;
		int output[3] = {0,0,0};
		cin >> a >> b >> c;
		
		if(abs(b-c)%2 == 0) output[0] = 1;
		if(abs(a-c)%2 == 0) output[1] = 1;
		if(abs(a-b)%2 == 0) output[2] = 1;
		
		cout << output[0] << " " << output[1] << " " << output[2] << "\n";
	}
	
	
	return 0;
}