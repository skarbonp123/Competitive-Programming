/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, X; cin>>N>>M>>X;

    vector<int> A(N+1, 0);
    for (int i = 0; i < M; i++) {
        int a; cin >> a;
        A[a] = 1;
    }

    int left = 0;
    for (int i = X - 1; i >= 1; i--) {
        if (A[i] == 1) {
            left++;
        }
    }

    int right = 0;
    for (int i = X + 1; i < N + 1; i++) {
        if (A[i] == 1) {
            right++;
        }
    }

    cout << min(left,right) << '\n';
    return 0;
}
