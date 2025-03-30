/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    vector<int> D(N);

    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    sort(D.begin(), D.end());

    int half = D[N/2] - D[N/2 - 1];
    cout << half;
    return 0;
}
