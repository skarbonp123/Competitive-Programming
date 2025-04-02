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

    if (s[0] == 'A') {
        if (islower(s[1])) {
            string w = s.substr(2, s.length() - 3);
            int tot_c = 0;
            for (char c : w) {
                if (isupper(c)) {
                    if (c == 'C') {
                        tot_c++;
                        if (tot_c > 1) {
                            cout << "WA\n";
                            return 0;
                        } else {
                            if (islower(s[s.length()-1])) {
                                cout << "AC\n";
                                return 0;
                            } else {
                                cout << "WA\n";
                                return 0;
                            }
                        }
                    } else {
                        cout << "WA\n";
                        return 0;
                    }
                } else {
                    if (tot_c == 0) {
                        cout << "WA\n";
                        return 0;
                    }
                }
            }
        } else {
            cout << "WA\n";
            return 0;
        }
    } else {
        cout << "WA\n";
    }

    
    return 0;
}
