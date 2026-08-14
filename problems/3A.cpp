#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string player1, player2;
	
	cin >> player1 >> player2;
	
	int x1, y1, x2, y2;
	
	x1 = player1[0] - 'a';
	y1 = player1[1] - '0';
	
	x2 = player2[0] - 'a';
	y2 = player2[1] - '0';
	
	
	
	cout << max(abs(x1 - x2), abs(y1 - y2)) << "\n";
	
	while(x1 != x2 || y1 != y2){
		if(x1 > x2){
			cout << 'L';
			x1--;
			
			if(y1 > y2){
				cout << 'D';
				y1--;
			}
			else if(y1 < y2){
				cout << 'U';
				y1 ++;
			}
		}
		else if(x1 < x2){
			cout << 'R';
			x1 ++;
			
			if(y1 > y2){
				cout << 'D';
				y1--;
			}
			else if(y1 < y2){
				cout << 'U';
				y1 ++;
			}
		}
		else{
			if(y1 > y2){
				cout << 'D';
				y1--;
			}
			else if(y1 < y2){
				cout << 'U';
				y1 ++;
			}
		}
		
		cout << "\n";
	}
	
	
	return 0;
}
