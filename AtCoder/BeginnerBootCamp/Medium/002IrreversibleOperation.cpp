#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int cnt = 0;
    for (int j = 0; j < s.size()/2; j++) {
        for (int i = s.size()-1; i >= 1; i--) {
            if (s[i] == 'W' && s[i-1] == 'B') {
                s[i] = 'B';
                s[i-1] = 'W';
                cnt++;
            }
        }
    }
        
    cout << cnt;

    return 0;
}
