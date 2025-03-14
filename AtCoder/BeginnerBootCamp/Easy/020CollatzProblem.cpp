/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int s; cin >> s;

    unordered_set<int> seen;
    int index = 1;

    while (seen.find(s) == seen.end()) {
        seen.insert(s);

        if (s % 2 == 0) {
            s /= 2;
        } else {
            s = 3 * s + 1;
        }

        ++index;
    }

    cout << index << '\n';

    return 0;
}
