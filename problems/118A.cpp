#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	unordered_set<char> set {'a', 'o', 'y', 'e', 'u', 'i'};
	
	
	string s;
	cin >> s;
	
	for(int i = 0 ; i < s.length() ; ++i){
		if(s[i] < 'a'){
			s[i] += 32;
		}
		
		if(!set.count(s[i])){
			cout << '.' << s[i];
		}
	}
	
	
	return 0;
	
}
