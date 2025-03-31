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
    vector<string> W(N);
    unordered_map<string, int> seen;
    
    for (int i = 0; i < N; i++) {
        cin >> W[i];
        seen[W[i]]++;
    }

    for (auto& pair : seen) {
        if (pair.second > 1) {
            cout << "No\n";
            return 0;
        }
    }

    for (int i = 0; i < N-1; i++) {
        if (W[i][W[i].size()-1] != W[i+1][0]) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";

    return 0;
}
