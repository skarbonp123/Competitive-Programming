#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int count = 0;
    int count_b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            if (count < a + b) {
                cout << "Yes" << "\n";
                count++;
            } else {
                cout << "No" << "\n";
            }
        } else if (s[i] == 'b') {
            if (count < a + b && count_b < b) {
                cout << "Yes" << "\n";
                count++;
                count_b++;
            } else {
                cout << "No" << "\n";
            }
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}
