/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    vector<int> P(N);

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    int count = 0;
    int min = INT_MAX;

    for (int i = 0; i < N; i++) {
        if (P[i] < min) {
            count++;
            min = P[i];
        }
    }

    cout << count << '\n';

    return 0;
}
