#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int n;
	    cin >> n;
	
	    int dist1 = 0;
	    int src = 1;
	    for (int u = 2 ; u <= n ; ++u) {
	        
	        while (dist1 < n - 1) {
	            cout << "? 1 " << u << " " << dist1 + 1 << endl;
	            
	            int ans;
	            cin >> ans;
	            
	            if (ans == -1) exit(0);
	            
	            if (ans == 1) {
	                dist1++;
	                src = u;
	            } 
				else break;
	        }
	    }
	    
	    int dist2 = dist1;
	    int dst = 1;
	    for (int u = 2 ; u <= n ; ++u) {
	        if (u == src) continue; 
	        
	        while (dist2 < n - 1) {
	            cout << "? " << src << " " << u << " " << dist2 + 1 << endl;
	            
	            int ans;
	            cin >> ans;
	            
	            if (ans == -1) exit(0);
	            
	            
	            if (ans == 1) {
	                dist2++;
	                dst = u;
	            } 
				else break;
	        }
	    }
	
	    cout << "! " << src << " " << dst << " " << dist2 << endl;
	}
	
    
	return 0;

}
