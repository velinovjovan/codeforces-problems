#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int d, sumTime;
	cin >> d >> sumTime;
	
	vector<pair<int,int>> minmaks (d);
	
	int abs_min = 0;
	int abs_maks = 0;
	
	for(int i = 0 ; i < d ; ++i){
		int a, b;
		cin >> a >> b;
		
		abs_min += a;
		abs_maks += b;
		
		minmaks[i] = {a, b};
	}
	
	if(sumTime > abs_maks || abs_min > sumTime){
		cout << "NO" << "\n";
		return 0;
	}
	
	vector<int> ans (d);
	int remain = sumTime - abs_min; 
	
	for(int i = 0 ; i < d ; ++i){
		if(remain == 0){
			break;
		}
		
		ans[i] += min(minmaks[i].second - minmaks[i].first, remain);
		remain -= ans[i];
	}
	
	cout << "YES" << "\n";
	for(int i = 0 ; i < d ; ++i){
		cout << minmaks[i].first + ans[i] << ' ';
	}
	
	return 0;
	
}
