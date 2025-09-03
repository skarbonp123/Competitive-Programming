/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    int Lmax = *max_element(L.begin(), L.end());
    int Rmin = *min_element(R.begin(), R.end());
    
    cout << max(0, Rmin - Lmax + 1) << '\n';

}
