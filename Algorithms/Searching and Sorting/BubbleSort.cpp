/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> nums = {1, 3, 8, 2, 9, 2, 5, 6};
    int n = nums.size();

    // Only a total of n - 1 outer loop comparisons needed
    for (int i = 0; i < n - 1; i++) {
        // At loop i, the last i items of the array are already sorted
        // hence only sort until n - i - 1
        for (int j = 0; j < n - i - 1; j++) {
            // swap two nums if the one on the left is larger than the right
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i] << '\n';
    }
    
    
    return 0;
}
