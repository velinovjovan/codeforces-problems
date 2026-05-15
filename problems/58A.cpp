#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin >> s;
	
	int curr = 0;
	char goal[] {"hello"};
	
	for(int i = 0 ; i < s.length() ; ++i){
		
		if(s[i] == goal[curr]){
			curr++;
			if(curr == 5){
				cout << "YES";
				return 0;
			}
		}
	}
	
	cout << "NO";
	
	
	return 0;
	
}
