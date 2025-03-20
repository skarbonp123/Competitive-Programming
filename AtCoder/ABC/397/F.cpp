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

    // Left distinct count from 1 to i
    vector<int> leftDistinct(N, 0);
    set<int> leftSet;

    // Right distinct count from j+1 to N
    vector<int> rightDistinct(N + 1, 0);
    set<int> rightSet;

    // Precompute left distinct count
    for (int i = 0; i < N; i++) {
        leftSet.insert(A[i]);
        leftDistinct[i] = leftSet.size();
    }

    // Precompute right distinct count
    for (int i = N - 1; i >= 0; i--) {
        rightSet.insert(A[i]);
        rightDistinct[i] = rightSet.size();
    }

    // Max result
    int maxResult = 0;

    for (int i = 1; i < N; i++) {
        set<int> middleSet;
        for (int j = i; j < N; j++) {
            middleSet.insert(A[j]);

            int leftCount = leftDistinct[i - 1];
            int middleCount = middleSet.size();
            int rightCount = rightDistinct[j + 1];
            
            maxResult = max(maxResult, leftCount + middleCount + rightCount);
        }

    }

    cout << maxResult;

    return 0;
}
