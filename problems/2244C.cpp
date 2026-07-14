#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
   	while(t--){
	    int n;
	    cin >> n;

	    int x, y;
	    cin >> x >> y;
	    
	    vector<int> a(n + 1);
	    for (int i = 1 ; i <= n ; ++i) {
	        cin >> a[i];
	    }
	
	    int g = gcd(x, y);
	
	    bool flag = false;
	    for (int i = 1 ; i <= n ; ++i) {
	        if (a[i] % g != i % g) {
	            flag = true;
	            break;
	        }
	    }
	
	    if (!flag) cout << "YES" << endl; 
		else cout << "NO" << endl;
	}
    
    return 0;
}
