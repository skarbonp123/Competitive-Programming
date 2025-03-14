/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word; cin >> word;
    int longest = 0;
    int current = 0;

    for (auto chr : word) {
        if (chr == 'A' || chr == 'G' || chr == 'T' || chr == 'C') {
            current += 1;
        } else {
            if (current > longest) {
                longest = current;
            }
            current = 0;
        }
    }

    if (current > longest) {
        longest = current;
    }

    cout << longest << ' ';

    return 0;
}
