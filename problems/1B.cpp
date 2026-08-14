#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    while(n--){
    	 string s;
	    cin >> s;
	    
	    int r, c;
	    
	    if (sscanf(s.c_str(), "R%dC%d", &r, &c) == 2) {
	        
	        string col = "";
	        while (c > 0) {
	            c--;
	            col += char(c % 26 + 'A');
	            c /= 26;
	        }
	        
	        reverse(col.begin(), col.end());
	        cout << col << r << "\n";
	        
	    } 
		else {
	        
			int i = 0;
	        c = 0;
	        
	        while (isalpha(s[i])) {
	            c = c * 26 + (s[i] - 'A' + 1);
	            i++;
	        }
	        
	        r = stoi(s.substr(i));
	        cout << "R" << r << "C" << c << "\n";
	    }
	}
    
    return 0;
    
}
