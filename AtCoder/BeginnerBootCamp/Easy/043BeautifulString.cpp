#include<bits/stdc++.h>
using namespace std;


int main() {
    string w;
    cin >> w;
    map<char, int> count;

    for (char c : w) {
        count[c]++;
    }

    for (auto pair : count) {
        if (pair.second % 2 != 0) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

}