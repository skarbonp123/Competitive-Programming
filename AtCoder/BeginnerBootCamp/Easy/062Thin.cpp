/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    vector<int> A(N);

    bool ok = false;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] == 1) ok = true;
    }
    
    
    if (ok) {

        int cnt = 1;
        for (int i = 0; i < N; i++) {
            if (A[i] == cnt) cnt++;
        }
        cout << N - cnt + 1<< '\n';
    } else {
        cout << "-1\n";
    }
    

    return 0;
}
