/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a, b; cin >> a >> b;

    if (a < 0 && b > 0) {
        cout << "Zero";
    } else {
        if (b < 0) {
            if (abs(a-b) % 2 == 0) {
                cout << "Negative";
            } else {
                cout << "Positive";
            }
        } else {    
            cout << "Positive";
        }
    }
}
