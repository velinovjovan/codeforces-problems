#include <bits/stdc++.h>

using namespace std;

struct Item {
    int id;
    long long cap;
    
    bool operator<(const Item& a) const {
		return cap > a.cap;
	}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, v;
    cin >> n >> v;

    vector<Item> ones;
    vector<Item> twos;

    for (int i = 0 ; i < n ; ++i) {
        int type;
        long long cap;
        cin >> type >> cap;
        
        if (type == 1) ones.push_back({i + 1, cap});
        else twos.push_back({i + 1, cap});
        
    }

    sort(ones.begin(), ones.end());
    sort(twos.begin(), twos.end());

    vector<long long> pref1(ones.size() + 1, 0);
    for (size_t i = 0 ; i < ones.size() ; ++i) {
        pref1[i + 1] = pref1[i] + ones[i].cap;
    }

    vector<long long> pref2(twos.size() + 1, 0);
    for (size_t i = 0; i < twos.size(); ++i) {
        pref2[i + 1] = pref2[i] + twos[i].cap;
    }

    long long max = -1;
    int best_1 = 0, best_2 = 0;

    for (int i = 0; i <= min(v, (int)ones.size()); ++i) {
        int remaining = v - i;
        int j = min((int)twos.size(), remaining / 2);

        long long current = pref1[i] + pref2[j];

        if (current > max) {
            max = current;
            best_1 = i;
            best_2 = j;
        }
    }

    cout << max << "\n";
    
    for (int i = 0; i < best_1; ++i) cout << ones[i].id << " ";
    for (int i = 0; i < best_2; ++i) cout << twos[i].id << " ";
    
    cout << "\n";

    return 0;
}
