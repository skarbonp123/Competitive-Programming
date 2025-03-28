/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long N, K; cin >> N >> K;

    if (K == 1) { 
        cout << 0;
        return 0;
    }

    long long rem = N % K; 
    cout << min (rem, K - rem) << '\n';
    
    return 0;
}
