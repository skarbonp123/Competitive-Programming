/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int H, W; cin >> H >> W;
    vector<char> C(W);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> C[j];
        }
        for (int j = 0; j < W; j++) {
            cout << C[j];
        }
        cout << '\n';
        for (int j = 0; j < W; j++) {
            cout << C[j];
        }
        cout << '\n';
        }

    return 0;
}
