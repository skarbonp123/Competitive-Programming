/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin>>N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin>>A[i];
    }

    sort(A.begin(), A.end());
    int asum = 0;
    int bsum = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            asum += A[i];
        } else {
            bsum += A[i];
        }
    }

    cout << abs(asum-bsum) << '\n';

    return 0;
}
