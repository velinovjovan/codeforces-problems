#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,br=0;
	cin >> n;
	string s;
	
	while(n--){
		cin >> s;
		
		if(s[0]=='+' || s[2]=='+') br++;
		else br--;
	}
	
	cout << br;
	
	
	return 0;
}
