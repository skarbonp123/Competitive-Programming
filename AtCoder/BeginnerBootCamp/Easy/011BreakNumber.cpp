/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin>>N;

    int x = 1;

    while (x <= N) {
        x *= 2;
    }

    cout << x/2 << '\n';
    
    return 0;
}
