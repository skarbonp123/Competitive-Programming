#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    vector<int> children(s.size(),1);

    int r_s = 0;
    vector<int> R(s.size());
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            r_s++;
        } else {
            R[i-1] = r_s;
            r_s = 0;
        }
    }

    int l_s = 0;
    vector<int> L(s.size());

    for (int i = s.size() - 1; i >=0; i--) {
        if (s[i] == 'L') {
            l_s++;
        } else {
            L[i+1] = l_s;
            l_s = 0;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        cout << R[i];
    }

    cout << "\n";

    for (int i = 0; i < s.size(); i++) {
        cout << L[i];
    }
    

    return 0;
}
