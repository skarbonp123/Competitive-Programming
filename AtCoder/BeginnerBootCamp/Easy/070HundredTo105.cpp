/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int X;
    cin >> X;

    for (int i = 1; i <= 1000; ++i) {
        int min_total = 100 * i;
        int max_total = 105 * i;
        if (X >= min_total && X <= max_total) {
            cout << "1\n";
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}
