/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2, s3, t; cin >> s1 >> s2 >> s3 >> t;

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '1') cout << s1;
        if (t[i] == '2') cout << s2;
        if (t[i] == '3') cout << s3;
    }
    
    return 0;
}
