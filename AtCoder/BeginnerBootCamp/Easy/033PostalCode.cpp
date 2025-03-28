/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b; cin>>a>>b;
    string s; cin>>s;
    
    if (s[a] != '-') {
        cout << "No\n";
        return 0;
    }
    
    
    for (int i = 0; i < s.size(); i++) {
        if (i == a) continue;
        if (!isdigit(s[i])) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";

    return 0;
}
