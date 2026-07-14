#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		int curr = 0;
		int maks = 0;
		
		for(int i = 0 ; i < n ; ++i){
			if(s[i] == '#'){
				curr++;
			}
			else{
				maks = max(curr, maks);
				curr = 0;
			}
		}
		maks = max(curr, maks);
		
		cout << (maks + 1)/2 << endl;
	}
	
	
	return 0;
	
}
