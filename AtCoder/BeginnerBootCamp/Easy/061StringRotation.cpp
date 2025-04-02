/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string S, T; cin >> S >> T;
    int n = S.length();

    for (int i = 0; i < n; i++) {
        char end = S[n-1];
        string sub = S.substr(0, n-1);
        if (T == end + sub) {
            cout << "Yes\n";
            return 0;
        } else {
            S = end + sub;
        }
    }

    cout << "No\n";
    
    return 0;
}
