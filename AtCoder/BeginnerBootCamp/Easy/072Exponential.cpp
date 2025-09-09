/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int X; cin >> X;

    int max = 1;

    for (int i = 2; i <= sqrt(X); i++) {
        for (int j = 2; j <= 10; j++) {
            if (pow(i,j) <= X && pow(i,j) > max) {
                max = pow(i,j);
            }
        }
    }

    cout << max;

    return 0;
}
