/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> dishes(5);

    for (int i = 0; i < 5; i++) {
        cin >> dishes[i];
    }
    
    int total = 0;
    int min_mod = 10;
    int dish;
    for (int i = 0; i < 5; i++) {
        if (dishes[i] % 10 != 0) {
            if (dishes[i] % 10 < min_mod) {
                min_mod = dishes[i]%10;
                dish = i;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i != dish) {
            total += (dishes[i] + 9) / 10 * 10;
        }
    }

    cout << total + dishes[dish] << '\n';

    return 0;
}
