/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;
    int n = s.length();
    int count = 0;

    if (s[0] == '0') {
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                if (s[i] != '0') count++;
            } else if (i % 2 == 1) {
                if (s[i] != '1') count++;
            }
        }
    } else {
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                if (s[i] != '1') count++;
            } else if (i % 2 == 1) {
                if (s[i] != '0') count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}
