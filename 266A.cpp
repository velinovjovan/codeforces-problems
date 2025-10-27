#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,ans=0;	
	string s;
	char prev;
	

	cin >> n;
	cin >> s;
	
	prev = s[0];
	for(int i=1;i<n;i++){
		if(prev == s[i]) ans++;
		prev = s[i];
	}
	
	cout << ans;
	
	
	return 0; 
}
