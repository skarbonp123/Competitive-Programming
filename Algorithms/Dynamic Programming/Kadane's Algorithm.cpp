/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // This algorithm solves the maximum sum sub-array problem in O(n) time
    vector<int> nums = {-1, 2, 4, -3, 5, 2, -5, 2};
    int size = nums.size();

    int best = 0;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = max(nums[i], sum + nums[i]);
        best = max(best, sum);
    }

    cout << best;
    
    return 0;
}
