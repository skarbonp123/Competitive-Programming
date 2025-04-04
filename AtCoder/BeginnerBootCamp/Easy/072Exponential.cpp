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
    int max = 0;


    for (int i = 1; i <= (int) log(X) + 1; i++) {
        for (int j = 0; j < 10; j++) {
            if (pow(i,j) > X) {
                break;
            } else if (pow(i,j) > max) {
                max = pow(i,j);
            }
        }
    }
    
    cout << max << '\n';
    return 0;
}
