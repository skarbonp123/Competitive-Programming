/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, T; cin >> N >> T;

    vector<int> C(N);
    vector<int> R(N);

    for (int i = 0; i < N; i++) cin >> C[i];
    for (int i = 0; i < N; i++) cin >> R[i];
    
    bool flag = false;
    
    for (int i = 0; i < N; i++) if (C[i] == T) flag = true;
    
    int index = 0;
    int rank = 0;
    if (flag) {
        for (int i = 0; i < N; i++) {
            if (C[i] == T) {
                if (R[i] > rank) {
                    rank = R[i];
                    index = i;
                }
            }
        }
    } else {
        rank = R[0];
        for (int i = 0; i < N; i++) {
            if (C[i] == C[0]) {
                if (R[i] > rank) {
                    rank = R[i];
                    index = i;
                }
            }
        }
    }
    
    cout << index + 1;
    
    return 0;
}
