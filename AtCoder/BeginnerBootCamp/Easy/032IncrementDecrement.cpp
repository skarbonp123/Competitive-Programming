/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    string s; cin >> s;

    int max = 0;
    int x = 0;
    for (char c : s) {
        if (c == 'D') {
            x-=1;
        } else if (c == 'I') {
            x+=1;
            if (x > max) {
                max = x;
            }
        }
    }

    cout << max << '\n';
    
    return 0;
}
