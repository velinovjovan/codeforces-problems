#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int H, M, S;
	cin >> H >> M >> S;
	
	int ceo = 60 * 60 * 5;
	int imamo = S + M * 60 + H * 60 * 60;
	
	if(ceo / 2 == imamo){
		cout << '=' << "\n";
	}
	else if(ceo / 2 < imamo){
		cout << '+' << "\n";
	}
	else{
		cout << '-' << "\n";
	}
	
	return 0;
}
