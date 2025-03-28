/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin>>s;

    int max = INT_MAX;

    for (int i = 0; i <= s.length() - 3; i++) {
        int difference = abs(stoi(s.substr(i, 3)) - 753);
        if (difference < max) {
            max = difference;
        }
    }
    cout << max << '\n';
    return 0;
}
