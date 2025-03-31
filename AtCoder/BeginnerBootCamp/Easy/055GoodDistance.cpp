/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, D; cin >> N >> D;

    vector<vector<double>> X(N, vector<double>(D));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> X[i][j];
        }
    }

    int total = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double distance = 0;
            for (int k = 0; k < D; k++) {
                distance += pow(X[i][k]-X[j][k],2);
            }
            distance = sqrt(distance);
            if (distance == floor(distance)) total++;
        }
    }

    cout << total << '\n';
    
    return 0;
}
