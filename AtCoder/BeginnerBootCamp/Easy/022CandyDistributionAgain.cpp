/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long  N, x; cin>>N>>x;

    vector<long long> A(N);
    for (long long &a: A ) cin >> a;
    
    sort(A.begin(), A.end());

    long long count = 0;
    for (long long a : A) {
        if (x < a) {
            break;
        } else {
            x -= a;
            count++;
        }
    }

    if (x > 0 && count == N) count--;

    cout << count << '\n';
    return 0;
}
