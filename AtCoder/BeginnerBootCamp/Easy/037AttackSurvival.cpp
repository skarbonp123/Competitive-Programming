/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N; //players
    int K; cin >> K; //num points for each player at the beginnin
    int Q; cin >> Q; //total num of corect answers;

    vector<int> points(N, K);
    
    for (int i = 0; i < Q; i++) {
        int a; cin >> a;
        for (int j = 0; j < N; j++) {
            if (j  != a - 1) { 
                points[j]--;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (points[i] <= 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }

    return 0;
}
