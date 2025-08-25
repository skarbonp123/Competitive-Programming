/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> numbers = {1, 3, 5, 6, 7, 8, 9, 4, 3, 2, 4, 5, 6, 1, 4, 6, 2};
    int maxVal = *max_element(numbers.begin(), numbers.end());

    vector<int> count(maxVal + 1, 0);

    for (int x : numbers) {
        count[x]++;
    }
    
    bool first = true;
    for (int i = 0; i <= maxVal; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (!first) cout << ' ';
            cout << i;
            first = false;
        }
    }

    return 0;
}
