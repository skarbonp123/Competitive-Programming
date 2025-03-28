/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;

    map<char, int> seen;

    for (char c : s) {
        if (seen.count(c)) {
            cout << "no\n";
            return 0;
        }
        seen[c] = 1;
    }

    cout << "yes\n";

    return 0;
}
