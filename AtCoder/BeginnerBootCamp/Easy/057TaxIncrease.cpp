/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B; cin >> A >> B;

    for (int i = 1; i < 1010; i++) {
        if (i * 8 / 100 == A && i * 10 / 100 == B)
        {
            cout << i;
            return 0;
        }
    }

    cout << "-1";
    
    return 0;
}
