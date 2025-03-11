/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, C; cin >> A >> B >> C;
    int count = 0;

    if (A==B && B==C) {
        if (A % 2 == 0) {
            cout << "-1";  
            return 0;
    }

    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int tA,tB,tC;
        tA = (B / 2) + (C / 2);
        tB = (A / 2) + (C / 2);
        tC = (A / 2) + (B / 2);
        
        A = tA;
        B = tB;
        C = tC;
        count++;
    }

    cout << count << '\n';
    
    return 0;
}
 