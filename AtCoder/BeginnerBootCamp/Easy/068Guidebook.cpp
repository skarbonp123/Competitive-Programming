/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;

    map<pair<string, int> , int> S;
    
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        int p; cin >> p;
        S[{s,100-p}] = i+1;
    }

    for (auto pair : S) {
        cout << pair.second << '\n';
    }

    return 0;
}
 