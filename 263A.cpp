#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int temp;
	
	
	for(int i=-2;i<3;i++){
		for(int j=-2;j<3;j++){
			cin >> temp;
			if(temp) cout << abs(i) + abs(j); 
		}
	}
	
	
	return 0;
}
