#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int a = 1;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if (A[a - 1] == 2) {
            cout << cnt + 1;
            return 0;
        } else {
            a = A[a-1];
        }
        cnt++;
    }

    cout << -1;
    
    return 0;
}
