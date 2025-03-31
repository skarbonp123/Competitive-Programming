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
    vector<int> B(N-1);
    
    for (int i = 0; i < N-1; i++) cin >> B[i];

    vector<int> A(N);

    A[0] = B[0];
    for (int i = 1; i < N-1; i++) A[i] = min(B[i-1],B[i]);
    A[N-1] = B[N-2];
    
    int sum = 0;
    for (int i : A) {
        sum += i;
    }

    cout << sum << '\n';
    return 0;
}
