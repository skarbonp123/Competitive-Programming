/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N ;
    
    vector<int> A(N);
    for (int &a : A) cin >> a;
    
    auto it = max_element(A.begin(), A.end());
    int max1 = *it;
    int max_idx = it - A.begin();
    int cnt = count(A.begin(), A.end(), max1);

    if (cnt > 1) {
        for (int i = 0; i < N; i++) {
            cout << max1 << '\n';
        }
    } else {
        
        int max2 = INT_MIN;
        for (int i = 0; i < N; i++) { 
            if (i == max_idx) continue;
            max2 = max(max2, A[i]);
        }

        for (int i = 0; i < N; i++) {
            if (i == max_idx) cout << max2 << '\n';
            else              cout << max1 << '\n';
        }
    }
    return 0;
}
