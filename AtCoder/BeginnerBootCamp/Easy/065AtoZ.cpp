/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;
    int start;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A' ) {
            start = i;
            break;
        }
    }

    int total;
    for (int i = s.length() - 1; i >= start; i--) {
        if (s[i] == 'Z') {
            cout << i - start + 1 << '\n';
            return 0;
        }
    }
    
    return 0;
}
