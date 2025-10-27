#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,anton = 0;
	cin >> n;
	
	string s;
	cin >> s;
	
	
	for(int i=0;i<n;i++){
		if(s[i] == 'A') anton++;
	}	
	
	
	if(anton > n-anton) cout << "Anton";
	else if(anton < n-anton) cout << "Danik";
	else cout << "Friendship";
	
	
	
	return 0;
}
