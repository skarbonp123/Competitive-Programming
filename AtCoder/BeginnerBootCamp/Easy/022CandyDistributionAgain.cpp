/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, x; cin>>N>>x;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int count = 0;

    for (int child : A) {
        if (x - child < 0) {
            break;
        } else {
            x -= child;
            ++count;
        }
    }

    cout << count;

    return 0;
}
