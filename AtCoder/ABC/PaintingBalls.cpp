/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K; cin>>N>>K;

    int ans;
    ans = K * pow(K-1,N-1);
    cout << ans << '\n';
    return 0;
}
