#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	
	unordered_map<string,string> mapa;
	string s1,s2;
	
	while(m--){
		cin >> s1 >> s2;
		if(s1.length() > s2.length()) mapa[s1] = s2;
		else mapa[s2] = s1;
	}
	
	for(int i=0;i<n;i++){
		cin >> s1;
		if(mapa.count(s1)) cout << mapa[s1] << " ";
		else cout << s1 << " ";
	}
}
