#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // Try all values of y starting from 1
    for (long long y = 1; y * y * y <= N + pow(y,3); y++) {
        long long yCube = y * y * y;
        long long xCube = yCube + N;

        // Find the cube root of xCube
        long long x = round(cbrt(xCube));

        // Check if x^3 == xCube
        if (x * x * x == xCube) {
            cout << x << " " << y << endl;
            return 0;
        }
    }

    // If no pair is found
    cout << -1 << endl;
    return 0;
}
