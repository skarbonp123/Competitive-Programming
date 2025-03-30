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
    vector<int> H(N);

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int maximum = 0;
    int cnt = 0;
    for (int i = 0; i < N-1; i++) {
        if (H[i] >= H[i+1]) {
            cnt++;
        } else {
            cnt = 0;
        }
        maximum = max(cnt, maximum);
    }
    
    cout << maximum << '\n';

    return 0;
}
