#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	vector<int> a;
	
	for(int i=0;i<s.length();i+=2){
		a.push_back(s[i] - '0');
	}
	
	sort(a.begin(),a.end());
	
	cout << a[0];
	for(int i=1;i<a.size();i++) cout << "+" << a[i];
	
	
	return 0;
}
