#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, s;
    cin >> m >> s;

    if(m * 9 < s || (s == 0 && m > 1)){
        cout << -1 << ' ' << -1;
        return 0;
    }

    if(m == 1){
        cout << s << ' ' << s;
        return 0;
    }

    string minans = "";
    int minsum = s - 1;

    for(int i = 1 ; i <= m ; ++i){
        int temp = min(9, minsum);
        minsum -= temp;
        minans = char(temp + '0') + minans;
    }

    minans[0]++;

    string maxans = "";
    int maxsum = s;

    for(int i = 1 ; i <= m ; ++i){
        int temp = min(maxsum, 9);
        maxans += char(temp + '0');
        maxsum -= temp;
    }

    cout << minans << ' ' << maxans;

    return 0;
}
