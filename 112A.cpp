#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,b;
	cin >> a >> b;
	
	for(int i=0;i<a.length();i++){
		if(tolower(a[i]) > tolower(b[i])){
			cout << 1;
			return 0;
		} 
		else if(tolower(a[i]) < tolower(b[i])){
			cout << -1;
			return 0;
		}
	}
	
	
	cout << 0;
	
	
	return 0;
}
