#include <bits/stdc++.h>
using namespace std;

int main() {
    
    stack<int> s;
    int Q;
    cin >> Q;

    for (int i = 0; i < 100; i++) {
        s.push(0);
    }

    vector<int> result;

    while (Q--) {
        int q;
        cin >> q;

        if (q == 1) {
            int c; cin >> c;
            s.push(c);
        } else if (q == 2) {
            if (!s.empty()) {
                result.push_back(s.top());
                s.pop();
            }
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }


    
    return 0;
}
