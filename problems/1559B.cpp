#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		char chars[2] = {'B','R'};
		
		string s;
		cin >> s;
		
		int i = 0;
		if(s[i] == '?'){
			while(s[i] == '?' && i < n){
				i++;
			}
		}
		
		if(i == n){
			for(i = 0 ; i < n ; ++i){
				cout << chars[i%2];
			}
			
			cout << "\n";
		}
		else{
			if(i != 0){
				if(s[i] == 'R'){
					if(i%2){
						for(int j = 0 ; j < i ; ++j){
							cout << chars[j%2];
						}
					}
					else{
						for(int j = 1 ; j <= i ; ++j){
							cout << chars[j%2];
						}
					}
				}
				else{
					if(i%2){
						for(int j = 1 ; j <= i ; ++j){
							cout << chars[j%2];
						}
					}
					else{
						for(int j = 0 ; j < i ; ++j){
							cout << chars[j%2];
						}
					}
				}
			}
			
			cout << s[i];
			char prev = s[i];
			
			for(int j = i + 1 ; j < n ; ++j){
				if(s[j] == '?'){
					if(prev == 'R'){
						cout << 'B';
						prev = 'B';
					}
					else{
						cout << 'R';
						prev = 'R';
					}
				}
				else{
					cout << s[j];
					prev = s[j];
				}
			}
			
			cout << "\n";
		}	
	}
	
	return 0;
}
