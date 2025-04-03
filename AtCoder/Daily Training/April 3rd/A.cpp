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

    int total = 0;
    for (char c : s) {
        if (c == 'v') {
            total++;  
        } else if (c == 'w'){
            total+=2; 
        }
    }
    
    cout << total;
    return 0;
}
