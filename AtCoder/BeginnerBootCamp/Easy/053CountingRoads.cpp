/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M; cin >> N >> M;

    vector<int> C(N, 0);

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        C[a-1]++;
        C[b-1]++;
    }

    for (int i = 0; i < N; i++) {
        cout << C[i] << '\n';
    }
    
    return 0;
}
