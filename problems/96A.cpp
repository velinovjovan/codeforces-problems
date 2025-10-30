#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	char prev = s[0];
	int streak = 1;
	
	for(int i=1;i<s.length();i++){
		if(s[i] == prev) streak++;
		else streak = 1;
		
		if(streak > 6){
			cout << "YES";
			return 0;
		}
		
		prev = s[i];
	}
	
	cout << "NO";
	
	
	
	return 0;
}