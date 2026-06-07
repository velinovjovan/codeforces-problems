#include<bits/stdc++.h>

using namespace std;

bool is_palindrome(long long x){
    long long copy = x;
    long long y = 0;
    
    while(x){
        y *= 10;
        y += x%10;
        x = x / 10;	
    }
    
    if(copy == y) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        
        long long lower_bound = min(10000ll, n/2);
        bool flag = false;
        
        for(long long i = 0 ; i <= lower_bound ; i+=12){
            if(is_palindrome(n - i)){
                cout << n - i << ' ' <<  i << "\n";
                flag = true;
                break;
            }
        }
        
        if(flag) continue;
        
        long long upper_bound = max(0ll, n - 10000);
        
        for(long long i = (upper_bound/12)*12 ; i <= n ; i+=12){ 
            if(is_palindrome(n - i)){
                cout << n - i << ' ' << i << "\n";
                flag = true;
                break;
            }
        }
        
        if(!flag) cout << -1 << "\n";
    }
}
