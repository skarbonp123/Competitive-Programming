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
    vector<int> T(N);

    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int M; cin >> M;

    for (int i = 0; i < M; i++) {
        int total = 0;
        int P, X; cin >> P >> X;
        for (int j = 0; j < N; j++) {
            if (j == P-1) {
                total += X;
            } else {
                total += T[j];
            }
        }
        cout << total << '\n';
    }
    
    return 0;
}
