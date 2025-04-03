/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, Q; cin >> N >> Q;
    
    vector<pair<int, int>> D(N);
    for (int i = 0; i < N; i++) {
        D[i] = {i + 1, 0};
    }

    for (int i = 0; i < Q; i++) {
        int n; cin >> n;
        if (n == 1) {
            char c; cin >> c;
            for (int i = N - 1; i > 0; i--) {
                D[i].first = D[i-1].first;
                D[i].second = D[i-1].second;
            }
            if (c == 'U') {
                D[0].second++;
            } else if (c =='D') {
                D[0].second--;
            } else if (c == 'R') {
                D[0].first++;
            } else {
                D[0].first--;
            }
        } else {
            int p; cin >> p;
            cout << D[p-1].first << ' ' << D[p-1].second << '\n';
        }
    }

    
    return 0;
}
