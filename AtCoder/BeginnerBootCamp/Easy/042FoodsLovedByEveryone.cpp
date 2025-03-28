/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M; cin >> N >> M;

    vector<int> foods(M, 0);

    for (int i = 0; i < N; i++) {
        int K; cin >> K;
        for (int j = 0; j < K; j++) {
            int a; cin >> a;
            foods[a-1]++;
        }
    }
    int total = 0;
    for (int food : foods) {
        if (food ==  N) total++;
    }

    cout << total << '\n';

    return 0;
}
