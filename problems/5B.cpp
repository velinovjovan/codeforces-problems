#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> lines;
    string s;
    int max_len = 0;

    while (getline(cin, s)) {
        lines.push_back(s);
		max_len = max(max_len, (int)s.length());
    }

    string border(max_len + 2, '*');
    cout << border << "\n";

    bool left_turn = true;

    for (const string& line : lines) {
        int diff = max_len - line.length();
        int left_spaces = 0;
		int right_spaces = 0;

        if (diff % 2 == 0) {
            left_spaces = diff / 2;
            right_spaces = diff / 2;
        } 
		else {
            
            if (left_turn) {
                left_spaces = diff / 2;
                right_spaces = diff - left_spaces;
            } 
			else {
                right_spaces = diff / 2;
                left_spaces = diff - right_spaces;
            }
            
            left_turn = !left_turn;
        }

        cout << "*" << string(left_spaces, ' ') << line << string(right_spaces, ' ') << "*" << "\n";
    }

    cout << border << "\n";

    return 0;
}
