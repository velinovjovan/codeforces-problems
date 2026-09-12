#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n, k;
		cin >> n >> k;
		
		if(k < n || k > (n + n - 1)){
			cout << -1 << "\n";
			continue;
		}
		
		vector<vector<int>> matrix (n, vector<int> (n, 0));
		
		int br = 1;
		int brdole = k - n + 1;
		
		if(brdole){
			for(int i = 0 ; i < brdole ; ++i){
				matrix[i][0] = br;
				br++;
			}
		}
		
		for(int i = 1 ; i < n ; ++i){
			if(br > k){
				break;
			}
			else{
				matrix[i][i] = br;
				++br;
			}
		}
	
		
		for(int i = 0 ; i < n ; ++i){
			for(int j = 0 ; j < n ; ++j){
				if(matrix[i][j] == 0){
					matrix[i][j] = br;
					br ++;
				}
			}
		}
		
		for(int i = 0 ; i < n ; ++i){
			for(int j = 0 ; j < n ; ++j){
				cout << matrix[i][j] << ' ';
			}
			cout << "\n";
		}
	}

	return 0;
}
