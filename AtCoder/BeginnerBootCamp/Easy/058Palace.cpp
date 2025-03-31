/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, T, A; cin >> N >> T >> A;

    int index = 0;
    double min_diff = DBL_MAX;
    
    for (int i = 0; i < N; i++) {
        int h; cin >> h;
        double temp = T - h * 0.006;
        double diff = abs(A - temp);
        
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }

    cout << index + 1 << '\n';

    
    return 0;
}
