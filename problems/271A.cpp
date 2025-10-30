#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	unordered_set<int> set;
	
	while(true){
		n++;
		set.insert(n%10);
		set.insert((n%100)/10);
		set.insert((n%1000)/100);
		set.insert(n/1000);
		
		if(set.size() == 4){
			cout << n;
			break;
		}
		
		set.clear();
	}	
	
	
	
	return 0;
}