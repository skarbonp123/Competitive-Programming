#include <bits/stdc++.h>

#define ll long long

using namespace std;

const ll MOD = 1e9 + 7;

int main() {
    
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int idx = 0;
    vector<int> b(n*k);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            b[idx] = a[j];
            idx++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n*k; i++) {
        for (int j = i + 1; j < n*k; j++) {
            if (b[i] > b[j]) {
                cnt++;
            }
        }
        cnt = cnt % MOD;
    }

    // for (int i = 0; i < b.size(); i++) {
    //     cout << b[i] << ' ';
    // }

    cout << cnt;

    return 0;
}
