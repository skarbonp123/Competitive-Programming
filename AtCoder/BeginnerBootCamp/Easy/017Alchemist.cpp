/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; cin >> N;
    priority_queue<double, vector<double>, greater<double>> pq;

    for (int i = 0; i<N; i++) {
        double x; cin >> x;
        pq.push(x);
    }

    while (pq.size() > 1) {

        double x = pq.top(); pq.pop();
        double y = pq.top(); pq.pop();
        
        double z = (x + y) / 2;

        pq.push(z);
    }

    cout << pq.top() << '\n';
    
    return 0;
}
