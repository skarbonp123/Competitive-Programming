/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long A, B; cin >> A >> B;

    for (int i = 0; i < 256; i++) {
        if ((A^i) == B) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
