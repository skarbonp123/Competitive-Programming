/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (char c : alphabet) {
        if (s.find(c) == string::npos) {
            cout << c << '\n';
            return 0;
        }
    }

    cout << "None" << '\n';

    return 0;
}
