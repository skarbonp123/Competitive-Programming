#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 2; i < N; i++) {
        if (A[i] == A[i-1] && A[i] == A[i-2]) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    
    return 0;
}
