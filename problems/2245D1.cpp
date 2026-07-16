#include<bits/stdc++.h>

using namespace std;

struct c {
    int o, i, j;
};

struct Edge {
	int to, w;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
    	int n, m;
	    cin >> n >> m;
	    
	    vector<c> conds(m);
	    for (int k = 0 ; k < m ; ++k) {
	        cin >> conds[k].o >> conds[k].i >> conds[k].j;
	    }
	    
	    vector<int> sign(n + 1, 0);
	    for (int k = 0 ; k < m ; ++k) {
	        if (conds[k].i == conds[k].j) {
	        	if(conds[k].o == 1){
	        		sign[conds[k].i] = 1;
				}
				else{
					sign[conds[k].i] = -1;
				}
	        }
	    }
	    
	    
	    vector<vector<Edge>> adj(n + 1);
	    vector<int> in_degree(n + 1, 0);
	    
	    bool poss = true;
	    
	    for (int idx = 0; idx < m; ++idx) {
	        if (conds[idx].i == conds[idx].j) continue;
	        
	        int u = conds[idx].i;
	        int v = conds[idx].j;
	        int o = conds[idx].o;
	        
	        if (sign[u] == sign[v]) {
	            if (sign[u] == 1 && o == 2) poss = false;
	            if (sign[u] == -1 && o == 1) poss = false;
	        } 
			else {
				int p;
				if(sign[u] == 1) p = u;
				else p = v;
				
	            int idx;
	            if(sign[u] == -1) idx = u;
	            else idx = v;
	            
	            if (o == 1) { 
	                adj[idx].push_back({p, 0});
	                in_degree[p]++;
	            } 
				else { 
	                adj[p].push_back({idx, 1});
	                in_degree[idx]++;
	            }
	        }
	    }
	    
	    if (!poss) {
	        cout << "NO\n";
	        continue;
	    }
	    
	    vector<int> x(n + 1, 0);
	    queue<int> q;
	    
	    for (int i = 1 ; i <= n ; ++i) {
	    	if(sign[i] == 1) x[i] = 0;
	    	else x[i] = 1;
	    	
	        if (in_degree[i] == 0) q.push(i);
	    }
	    
	    int count = 0;
	    while (!q.empty()) {
	        int u = q.front();
			q.pop();
	       	count++;
	    
	        for (const auto& edge : adj[u]) {
	            if (x[u] + edge.w > x[edge.to]) {
	                x[edge.to] = x[u] + edge.w;
	            }
	            
	            in_degree[edge.to]--;
	            
	            if (in_degree[edge.to] == 0) {
	                q.push(edge.to);
	            }
	        }
	    }
	    
	    if (count < n) cout << "NO\n";
		else {
	        cout << "YES\n";
	        for (int i = 1 ; i <= n ; ++i) {
	            cout << sign[i] * x[i] << ' ';
	        }
	        cout << "\n";
	    }
	}
    
    
    return 0;
    
}
