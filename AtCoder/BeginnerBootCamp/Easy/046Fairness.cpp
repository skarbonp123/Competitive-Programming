/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long A, B, C, K; 
    cin >> A >> B >> C >> K;

    /**
     * important to store result in a long long when doing a condition and not just simply doing it within the if/else because
     * then it doesnt store it in the appropriate variable type hence giving wrong answer
    **/

    long long result = (K % 2 == 0) ? (A - B) : (B - A);

    if (abs(A - B) > 1e18) {
        cout << "Unfair" << '\n';
    } else {
        cout << result << '\n';
    }

    

    // 1 2 3 1

    // 1 - 5   4   3
    // 2 - 7   8   9
    // 3 - 17  16  15
    // 4 - 31  32  33


    // 2 3 2 4

    // 1 - 5 4 5
    // 2 - 9 10 9
    // 3 - 18 19 18
    // 4 - 37 36 37


    // 6 4 7 4

    // 1 - 11 13 10
    // 2 - 23 21 24
    // 3 - 45 47 44


    
    return 0;
}
