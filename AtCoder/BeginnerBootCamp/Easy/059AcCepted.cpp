/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;

    string begin = s.substr(0, 1);
    string mid = s.substr(2, s.size() - 3);
    

    int index = -1;
    int count = 0;
    for (int i = 0; i < mid.size(); i++) {
        if (mid[i] == 'C') {
            count++;
            index = i + 2;
        }
    }

    if (begin == "A" && count == 1) {
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || i == index) {
                continue;
            } else {
                if (isupper(s[i])) {
                    cout << "WA\n";
                    return 0;
                }
            }
        }
        cout << "AC\n";
    } else {
        cout << "WA\n";
    }
    
    return 0;
}
