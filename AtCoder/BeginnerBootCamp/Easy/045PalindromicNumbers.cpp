/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B; cin >> A >> B;
    int cnt = 0;

    for (int i = A; i <= B; i++) {
        string str = to_string(i);
        string rvs = str;
        reverse(rvs.begin(), rvs.end());
        if (str == rvs) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
