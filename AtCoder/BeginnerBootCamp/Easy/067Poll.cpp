/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    map<string, int> S;

    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        S[s]++;
    }

    int max = -1;
    for (auto pair : S) {
        if (pair.second > max) {
            max = pair.second;
        }
    }

    for (auto pair : S) {
        if (pair.second == max) {
            cout << pair.first << '\n';
        }
    }

    
    return 0;
}
