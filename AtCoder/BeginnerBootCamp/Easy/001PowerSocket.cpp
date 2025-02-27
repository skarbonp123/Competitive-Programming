#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;

    int sockets = 1;
    int count = 0;

    while (sockets < b) {
        sockets += (a-1);
        count++;
    }


    cout << count;    
    
    return 0;
}
