/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;


bool isPrime(int X) {
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int X; cin>>X;
    

    if (X == 2 || X == 3) {
        cout << X;
        return 0;
    }

    while(!isPrime(X)) X++;

    cout << X;

    return 0;
}
