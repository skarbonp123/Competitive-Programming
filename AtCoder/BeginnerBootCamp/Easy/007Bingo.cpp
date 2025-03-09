/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;


bool bingo(vector<vector<bool>> grid) {
    if ((grid[0][0] && grid[0][1] && grid[0][2])
    ||  (grid[1][0] && grid[1][1] && grid[1][2])
    ||  (grid[2][0] && grid[2][1] && grid[2][2])
    ||  (grid[0][0] && grid[1][0] && grid[2][0])
    ||  (grid[0][1] && grid[1][1] && grid[2][1])
    ||  (grid[0][2] && grid[1][2] && grid[2][2])
    ||  (grid[0][0] && grid[1][1] && grid[2][2])
    ||  (grid[0][2] && grid[1][1] && grid[2][0])) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<vector<int>> grid(3, vector<int>(3, 0));
    vector<vector<bool>> checked(3, vector<bool>(3, false));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    int N; cin >> N;

    while(N--) {
        int b; cin >> b;
        for(int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (b == grid[i][j]) checked[i][j] = true;
            }
        }

        if (bingo(checked)) {
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << '\n';

    return 0;
}
