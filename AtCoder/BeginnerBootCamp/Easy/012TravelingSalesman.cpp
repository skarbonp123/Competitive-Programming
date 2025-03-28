/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int K, N; cin>>K>>N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maximum = 0;

    for (int i = 1; i < N; i++) {
        maximum = max(maximum, A[i] - A[i - 1]);
    }
    
    maximum = max(maximum, K - A[N - 1] + A[0]);
    

    cout << K - maximum;
    
    return 0;
}
