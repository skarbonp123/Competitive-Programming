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
    int A, B; cin >> A >> B;

    int total = 0;
    for (int i = 1; i <= N; i++) {
        int k = i;
        int sum = 0;
        for (char j : to_string(i)) {
            sum += int(j) - 48;
        }
        if (A <= sum && sum <= B) {
            total += k;
        }
    }
        
    cout << total << '\n';
    return 0;
}
