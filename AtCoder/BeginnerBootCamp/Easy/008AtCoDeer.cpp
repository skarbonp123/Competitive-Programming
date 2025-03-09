/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin>>a>>b;

    string c = to_string(a) + to_string(b);
    int num = stoi(c);

    int x = 1;
    while (x*x <= num) {
        if (x * x == num) {
            cout << "Yes" << '\n';
            return 0;
        } else {
            x += 1;
        }
    }

    cout << "No" << '\n';
    

    return 0;
}
