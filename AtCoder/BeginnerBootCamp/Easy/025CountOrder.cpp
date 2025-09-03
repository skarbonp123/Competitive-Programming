/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin>>N;
    vector<int> P(N), Q(N);

    for (int &p: P) cin >> p;
    for (int &q: Q) cin >> q;

    vector<int> base(N); 
    iota(base.begin(), base.end(), 1);

    int idx = 1;
    int a = 0, b = 0;

    do {
        if (P == base) a = idx;
        if (Q == base) b = idx;
        if (a && b) break; //early exit
        idx++;
    } while (next_permutation(base.begin(), base.end()));

    cout << abs(a - b) << '\n';
    
    return 0;
}
