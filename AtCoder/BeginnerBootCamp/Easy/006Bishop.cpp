#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //Bishop can move on about half of the squares

    ll H, W; cin >> H >> W;

    if (H == 1 || W == 1) {
        cout << 1 << '\n';
    } else { 
        cout << (H * W + 1) / 2 << "\n";
    }
    
    return 0;
}
