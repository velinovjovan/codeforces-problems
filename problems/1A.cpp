#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;

    long long ans = 0;

    ans += (n / a) * (m / a);

    if (n % a) {
        ans += m / a;
    }

    if (m % a) {
        ans += n / a;
    }

    if (n % a && m % a) {
        ans++;
    }

    cout << ans;

    return 0;
}
