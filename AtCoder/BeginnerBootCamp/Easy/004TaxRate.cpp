#include <bits/stdc++.h>
using namespace std;

int main() {
    float n;
    cin >> n;

    int x = n/1.08;
    int y = n/1.08 + 1;

    if (floor(x * 1.08) == n || floor((y * 1.08)) == n) {
        if (floor(x * 1.08) == n) {
            cout << x;
        } else {
            cout << y;
        }
    } else {
        cout << ":(";
    }
    
    return 0;
}
