/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, M; cin >> A >> B >> M;
    vector<int> a(A);
    vector<int> b(B);

    for (int i = 0; i < A; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < B; i++) {
        cin >> b[i];
    }
    
    //Here we are looping over every pair i,j which is very inefficient.
    int min = INT_MAX;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            if (a[i] + b[j] < min) {
                min = a[i] + b[j];
            }
        }
    }
    //We can instead just take the minimum element i in a and the minimum element j in b and add those two together
    // int minA = min_element(a.begin(), a.end());
    // int minB = min_element(b.begin(), b.end());
    //int min = minA + minB;

    for (int i = 0; i < M; i++) {
        int x; cin >> x;
        int y; cin >> y;
        int c; cin >> c;

        if (a[x-1] + b[y-1] - c < min) {
            min = a[x-1] + b[y-1] - c;
        }
    }

    cout << min;
    return 0;
}
