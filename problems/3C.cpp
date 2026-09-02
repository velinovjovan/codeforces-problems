#include<bits/stdc++.h>

using namespace std;

bool hasWon(const vector<string>& board, char c) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == c && board[i][1] == c && board[i][2] == c) return true;
        if (board[0][i] == c && board[1][i] == c && board[2][i] == c) return true;
    }
    
    if (board[0][0] == c && board[1][1] == c && board[2][2] == c) return true;
    if (board[0][2] == c && board[1][1] == c && board[2][0] == c) return true;
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> board(3);
    int countX = 0;
	int count0 = 0;

    for (int i = 0; i < 3; ++i) {
        cin >> board[i];
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'X') countX++;
            if (board[i][j] == '0') count0++;
        }
    }

    bool winX = hasWon(board, 'X');
    bool win0 = hasWon(board, '0');

    if (countX < count0 || countX > count0 + 1) cout << "illegal";
    else if (winX && win0) cout << "illegal";
    else if (winX && countX != count0 + 1) cout << "illegal";
    else if (win0 && countX != count0) cout << "illegal";
    else if (winX) cout << "the first player won";
    else if (win0) cout << "the second player won";
    else if (countX + count0 == 9) cout << "draw";
    else if (countX == count0) cout << "first";
    else if (countX == count0 + 1) cout << "second";
    
    cout << "\n";

    return 0;
}
