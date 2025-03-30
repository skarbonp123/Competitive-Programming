/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string A, B; cin >> A >> B;

    if (A.length() != B.length()) {
        cout << ((A.length() > B.length()) ? ("GREATER\n") : ("LESS\n"));
    } else {
        if (A > B) {
            cout << "GREATER\n";
        } else if (B > A) {
            cout << "LESS\n";
        } else {
            cout << "EQUAL\n";
        }
    }
        
    
    return 0;
}
