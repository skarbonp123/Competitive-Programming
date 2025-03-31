/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, K; cin >> A >> B >> K;

    if (2 * K >= (B - A + 1)) {
        for (int i = A; i <= B; i++) {
            cout << i << '\n';
        }
    } else {
        for (int i = A; i < A + K; i++) {
            cout << i << '\n';
        }
        for (int i = B - K + 1; i <= B; i++) {
            cout << i << '\n';
        }
    }
}
