#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long sum = x + y;
        long long best = 0;
        
        bool flag = false;
        for (int i = 29; i >= 0; --i) {
            if ((sum >> i) & 1 == 1) {
                if (flag || (x >> i) & 1 == 1) {
                    best |= (1 << i);
                }
            } 
			else if((x >> i) & 1 == 1) {
                flag = true;
            }
        }

        cout << sum << ' ' << x - best << "\n";
    }

    return 0;
}
