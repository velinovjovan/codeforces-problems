#include<bits/stdc++.h>

using namespace std;

const int MAXN = 5000005;
int factors[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 2; i < MAXN; ++i) {
        if (factors[i] == 0) {
            for (int j = i; j < MAXN; j += i) {
                int k = j;
                while (k % i == 0) {
                    factors[j]++;
                    k /= i;
                }
            }
        }
    }
    
    for (int i = 2; i < MAXN; ++i) {
        factors[i] += factors[i - 1];
    }
    
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            cout << factors[a] - factors[b] << "\n";
        }
    }
    
    
    return 0;

}
