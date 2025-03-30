/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int h, w; cin >> h >> w;

    cout << string(w + 2, '#') << '\n';
    for (int i = 0; i < h; i++) {
        cout << '#';
        for (int j = 0; j < w; j++) {
            char c; cin >> c;
            cout << c;
        }
        cout << "#\n";
    }
    cout << string(w + 2, '#');
    
    
    return 0;
}
