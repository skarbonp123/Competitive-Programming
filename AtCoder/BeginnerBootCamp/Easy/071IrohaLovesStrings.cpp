#include <bits/stdc++.h>
using namespace std;


bool compare(const string &a, const string &b) {
    return a + b < b + a;
}

int main() {
    
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    string result = "";
    for (auto &s : S) {
        result += s;
    }

    cout << result;
    return 0;
}
