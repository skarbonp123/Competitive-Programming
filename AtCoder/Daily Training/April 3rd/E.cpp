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
    string s; cin >> s;
    map<pair<int, int>, int> myMap;
    pair<int,int> p{0,0};
    myMap[p]++;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'R') {
            p.first++;
        } else if (s[i] == 'L') {
            p.first--;
        } else if (s[i] == 'U') {
            p.second++;
        } else if (s[i] == 'D') {
            p.second--;
        }
        myMap[p]++;
    }
    
    for (auto pair : myMap) {
        if (pair.second > 1) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}
