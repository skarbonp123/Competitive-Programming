/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, A, B; cin >> N >> A >> B;


    long ans = (N / (A+B))  * A;

    //Can also be written as:
    // ans += min(A, N % (A+B))
    if (N % (A + B) >= A) {
        ans += A;
    } else {
        ans += N % (A + B);
    }


    cout << ans;
    
    return 0;
}
