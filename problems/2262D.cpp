#include<bits/stdc++.h>

using namespace std;

struct Fenwick{
	int n;
	vector<long long> bit;
	
	Fenwick(int n) : n(n), bit(n + 1, 0) {}
	
	void add(int pos, long long val){
		++pos;
		while(pos <= n){
			bit[pos] += val;
			pos += pos & -pos;
		}
	}
	
	long long sum(int pos){
		long long res = 0;
		while(pos > 0){
			res += bit[pos];
			pos -= pos & -pos;
		}
		return res;
	}
	
	long long query(int l, int r){
		return sum(r) - sum(l);
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<long long> a(n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
		}
		
		vector<int> p(n);
		
		for(int i = 0 ; i < n ; ++i){
			cin >> p[i];
			--p[i];
		}
		
		set<int> starts;
		vector<long long> total(n, 0);
		Fenwick bit(n);
		vector<int> ans(n);
		
		for(int k = n - 1 ; k >= 0 ; --k){
			int x = p[k];
			
			bit.add(x, a[x]);
			
			auto it = starts.lower_bound(x);
			
			if(it == starts.begin()){
				if(starts.empty()){
					starts.insert(x);
					total[x] = a[x];
				}
				else{
					int c = *it;
					
					if(a[x] < a[c]){
						starts.insert(x);
						total[x] = a[x];
					}
					else{
						long long old = total[c];
						
						starts.erase(c);
						starts.insert(x);
						total[x] = a[x] + old;
						
						auto nx = starts.find(x);
						++nx;
						
						while(nx != starts.end()){
							int j = *nx;
							
							if(a[j] <= total[x]){
								total[x] += total[j];
								nx = starts.erase(nx);
							}
							else{
								break;
							}
						}
					}
				}
			}
			else{
				--it;
				int c = *it;
				
				long long old = total[c];
				long long S = bit.query(c, x);
				
				if(a[x] <= S){
					total[c] += a[x];
					
					auto nx = starts.find(c);
					++nx;
					
					while(nx != starts.end()){
						int j = *nx;
						
						if(a[j] <= total[c]){
							total[c] += total[j];
							nx = starts.erase(nx);
						}
						else{
							break;
						}
					}
				}
				else{
					total[c] = S;
					
					starts.insert(x);
					total[x] = a[x] + (old - S);
					
					auto nx = starts.find(x);
					++nx;
					
					while(nx != starts.end()){
						int j = *nx;
						
						if(a[j] <= total[x]){
							total[x] += total[j];
							nx = starts.erase(nx);
						}
						else{
							break;
						}
					}
				}
			}
			
			ans[k] = (int)starts.size() - 1;
		}
		
		for(int i = 0 ; i < n ; ++i){
			cout << ans[i] << " ";
		}
		
		cout << '\n';
	}
	
	return 0;
}
