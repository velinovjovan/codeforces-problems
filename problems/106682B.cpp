#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<string> possible;

    for (int i = 0; i + 4 < (int)s.size(); ++i) {
        if (isVowel(s[i]) && s[i + 1] == 'G' && s[i + 2] == 'A' && s[i + 3] == 'S' && s[i + 4] == s[i]) {
            possible.insert(s.substr(0, i) + s.substr(i + 4));
        }
    }

    if (possible.empty()) {
        cout << "-\n";
    } 
	else if (possible.size() > 1) {
        cout << "+\n";
    } 
	else {
        cout << *possible.begin() << '\n';
    }

    return 0;
}
