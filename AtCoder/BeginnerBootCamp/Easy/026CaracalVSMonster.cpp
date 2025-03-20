/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

long long monster_divide(long long H) {
    if (H == 1) {
        return 1;
    } else if (H > 1) {
        return 2 * monster_divide(H/2) + 1;
    } else {
        return 0;
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long H; cin >> H;

    cout << monster_divide(H) << '\n';
}

