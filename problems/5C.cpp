#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;
	cin >> s;
	
	stack<char> stek;
	
	int curr = 0;
	int maks = 0;
	int ans = 0;
	
	for(auto &c : s){
		if(stek.empty()){
			if(c == '('){
				stek.push(c);
			}
			else{
				if(curr){
					maks = max(maks, curr);
					ans ++;
					curr = 0;
				}
			}
		}
		else{
			if(c == '('){
				stek.push(c);
			}
			else{
				stek.pop();
				curr++;
			}
		}
	}
	
	if(curr){
		maks = max(maks, curr);
		ans ++;
		curr = 0;
	}
	
	
	if(maks == 0) cout << "0 1" << "\n";
	else cout << maks * 2 << ' ' << ans << "\n";
	
	
	return 0;
}
