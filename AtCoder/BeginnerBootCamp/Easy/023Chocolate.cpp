/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, D, X; cin >> N >> D >> X;

    vector<int> A(N); 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int total = X;

    for (int i = 0; i < N; i++) {
        ++total;
        int d = A[i];
        while(d < D) {
            d += A[i]; 
            ++total;
        }
    }

    cout << total;

    return 0;
}
