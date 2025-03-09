/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K; cin>>N>>K;

    vector<int> X(N);
    for (int i = 0; i < N; i++ ) {
        cin >> X[i];
    }

    int sum = 0;

    for (int x : X) {
        sum += (2 * min(abs(K - x), abs(0 - x)));
    }

    cout << sum << '\n';
    return 0;
}
