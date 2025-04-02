/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string O, E; cin >> O >> E;
    int N;

    bool ok = true;
    if (O.length() - E.length() == 0) {
        N = O.length();
    } else {
        N = O.length() - 1;
        ok = false;
    }

    string password;
    for (int i = 0; i < N; i++) {
        password += O[i];
        password += E[i];
    }

    if (ok) cout << password;
    else cout << password + O[N];

    return 0;
}
