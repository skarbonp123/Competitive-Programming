/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;

    int x3 = x2 - (y2-y1);
    int y3 = y2 + (x2-x1);
    int x4 = x3 - (y3-y2);
    int y4 = y3 + (x3-x2);

    cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;

    return 0;
}
