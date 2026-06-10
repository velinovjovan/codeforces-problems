#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<int> ans (n * 4, 0);
		
		if(n%2 == 0){
			int start = 0;
			for(int i = 1 ; i <= n ; ++i){
				if(i%2){
					ans[start] = i;
					ans[start + 3] = i;
					ans[start + 5] = i;
					ans[start + 6] = i;
					++start;
				}	
				else{
					ans[start] = i;
					ans[start + 1] = i;
					ans[start + 3] = i;
					ans[start + 6] = i;
					start = start + 7;
				}
			}
		}
		else{
			
			vector<int> ans3 = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};
			
			for(int i = 0; i < 12 ; ++i){
				ans[i] = ans3[i];
			}
			
			int start = 12;
			for(int i = 4 ; i <= n ; ++i){
				if(i%2 == 0){
					ans[start] = i;
					ans[start + 3] = i;
					ans[start + 5] = i;
					ans[start + 6] = i;
					++start;
				}	
				else{
					ans[start] = i;
					ans[start + 1] = i;
					ans[start + 3] = i;
					ans[start + 6] = i;
					start = start + 7;
				}
			}
		}
		
		
		for(int i = 0 ; i < n * 4 ; ++i){
			cout << ans[i] << ' ';
		}
		
		cout << endl;
	}
	
	
	return 0;
}
