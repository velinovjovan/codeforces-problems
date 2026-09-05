#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    
    int curr = 0;
    long long ans = 0;
    
    while(getline(cin, s)){
        if(s[0] == '+') {
            curr++;
        }
        else if(s[0] == '-') {
            curr--;
        }
        else {
            int pos = s.find(":");
            ans += (s.length() - pos - 1) * curr;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}
