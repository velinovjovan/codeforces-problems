#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int res = 1;
    int a = 8;

    while (n) {
        if (n & 1)
            res = (res * a) % 10;

        a = (a * a) % 10;
        n >>= 1;
    }

    cout << res;
}
