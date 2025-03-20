/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // To store the number of distinct elements on the right side for each index.
    vector<int> rightDistinct(N + 1, 0);
    set<int> rightSet;

    // Precompute the number of distinct elements on the right side for each index.
    for (int i = N - 1; i >= 0; i--) {
        rightSet.insert(A[i]);
        rightDistinct[i] = rightSet.size();
    }

    set<int> leftSet;
    int maxDistinct = 0;

    // Traverse the array, moving the split point from left to right.
    for (int i = 0; i < N; i++) {
        leftSet.insert(A[i]);
        int leftDistinctCount = leftSet.size();
        int rightDistinctCount = rightDistinct[i + 1];
        maxDistinct = max(maxDistinct, leftDistinctCount + rightDistinctCount);
    }

    cout << maxDistinct << "\n";
    
    return 0;
}
