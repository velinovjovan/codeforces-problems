#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> pref1(n + 1, 0);
		vector<int> pref3(n + 1, 0);

        for (int i = 0 ; i < n ; ++i) {
            cin >> a[i];
            pref1[i + 1] = pref1[i] + (a[i] == 1);
            pref3[i + 1] = pref3[i] + (a[i] == 3);
        }

        vector<int> A(n + 1);
        vector<int> B(n + 1);

        for (int i = 0 ; i <= n ; ++i) {
            A[i] = 2 * pref1[i] - i;
            B[i] = i - 2 * pref3[i];
        }

        vector<int> sufMax(n + 2, INT_MIN);
        
        for (int i = n - 1 ; i >= 0 ; --i) {
            sufMax[i] = max(sufMax[i + 1], B[i]);
        }

        bool ans = false;
        for (int l = 1 ; l <= n - 2 ; ++l) {
            if (A[l] >= 0 && sufMax[l + 1] >= B[l]) {
                ans = true;
                break;
            }
        }

        if(ans){
        	cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
    }
    

    return 0;

}
