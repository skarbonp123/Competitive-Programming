/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    ll L[87];

    L[0] = 2LL; L[1] = 1LL;

    for (int i = 2; i <= N; i++) L[i] = L[i-1] + L[i-2];
    
    cout << L[N] << '\n';

    return 0;
}
