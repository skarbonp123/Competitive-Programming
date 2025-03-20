/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double X; cin >> X;

    if (X < 37.5) {
        cout << 3;
    } else if (37.5 <= X && X < 38) {
        cout << 2;
    } else {
        cout << 1;
    }
    
    return 0;
}
