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
    vector<int> A(4, 0);

    for (auto c : s) {
        if (c == 'N') {
            A[0]++;
        } else if (c == 'S') {
            A[1]++;
        } else if (c == 'E') {
            A[2]++;
        } else {
            A[3]++;
        }
    }
    // wtf why is this correct
    cout << (((A[0] || A[1]) ^ (A[0] && A[1])) ||  ((A[2] || A[3]) ^ (A[2] && A[3])) ? ("No\n") : ("Yes\n"));

    
    return 0;
}
