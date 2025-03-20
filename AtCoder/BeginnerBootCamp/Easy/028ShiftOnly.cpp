/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;
    while(1) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 == 1) {
                cout << count;
                return 0;
            } else {
                A[i] /= 2;
            }
        }
        count++;

    }
    
    return 0;
}
