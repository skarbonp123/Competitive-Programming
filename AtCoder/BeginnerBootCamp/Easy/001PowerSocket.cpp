#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;

    int s = 1;
    int count = 0;

    while (s < b) {
        s += (a-1);
        count++;
    }


    cout << count;    
    
    return 0;
}
