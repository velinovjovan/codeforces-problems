#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int lower = 0;
	for(int i=0;i<s.length();i++){
		if(s[i] < 'a') lower++;
	}
		
	if(lower <= s.length()-lower) transform(s.begin(), s.end(), s.begin(), ::tolower);
	else transform(s.begin(), s.end(), s.begin(), ::toupper);
	
	cout << s;
	
	
	return 0;
}
