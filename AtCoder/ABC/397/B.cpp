/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;

    while (s.size() % 2 != 0) {
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0 && s[i] == 'o') {
                string first = s.substr(0,i);
                string last = s.substr(i,s.size()-1);
                s =  first + 'i' + last;
                break;
            } else if (i % 2 == 1 && s[i] == 'i') {
                string first = s.substr(0,i);
                string last = s.substr(i,s.size()-1);
                s =  first + 'o' + last;
                break;
            } else {
                if (i % 2 == 0) {
                    s += 'i';
                } else {
                    s += 'o';
                }
            }
        }
    }
    


    cout << s;
    return 0;
}
