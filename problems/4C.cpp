#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	unordered_set<string> set;
	unordered_map<string, int> mapa;
	
	for(int i = 0 ; i < n ; ++i){
		string s;
		cin >> s;
		
		if(set.count(s)){
			cout << s;
			cout << mapa[s];
			mapa[s] ++;
			cout << "\n";
		}
		else{
			cout << "OK" << "\n";
			set.insert(s);
			mapa[s] ++;
		}
	}
	
	return 0;
}
