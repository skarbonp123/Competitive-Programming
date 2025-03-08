#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> x(n);
    float sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        x[i] = a;
        sum += a;
    }

    sum = sum / n;
    sum = round(sum);

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += pow((x[i] - sum), 2);
    }

    cout << total << "\n";
    
    return 0;
}
