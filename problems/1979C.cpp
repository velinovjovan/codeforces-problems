#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> k(n);
        long long lcm = 1;
        
        for(int i = 0 ; i < n ; ++i){
            cin >> k[i];
            lcm = std::lcm(lcm, k[i]); 
        }
        
        long long sum_of_bets = 0;
        vector<long long> bets(n);

        for(int i = 0 ; i < n ; ++i){
            bets[i] = lcm / k[i];
            sum_of_bets += bets[i];
        }
    
        if(lcm > sum_of_bets){
            for(int i = 0 ; i < n ; ++i){
                cout << bets[i] << ' ';
            }
        }
        else{
            cout << -1;
        }
        
        cout << "\n";
    }
    
    return 0;
}
