#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    stack<int> stek;
    stek.push(-1);
    
    int max_len = 0;
    int count = 1;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            stek.push(i);
        } 
		else {
            stek.pop();
            
            if(stek.empty()){
                stek.push(i);
            } 
			else {
                int current_len = i - stek.top();
                
                if(current_len > max_len){
                    max_len = current_len;
                    count = 1;
                } 
				else if(current_len == max_len){
                    count++;
                }
            }
        }
    }
    
    cout << max_len << " " << count << "\n";
    
    return 0;
}
