#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int solved = 0;
    int total = 0;

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            int a;
            cin >> a;
            total += a * b[j];
        }
        
        if (total + c > 0) solved++;
        
        total = 0;
    }
    

    cout << solved;
    return 0;
}
