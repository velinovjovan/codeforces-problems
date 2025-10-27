#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	unordered_set<char> set;
	
	cin >> s;
	
	for(int i=0;i<s.length();i++) set.insert(s[i]);
	
	
	if(set.size()%2) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
	
	
	
	return 0;
}
