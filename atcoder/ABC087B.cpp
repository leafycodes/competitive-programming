#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int cnt = 0;

    for (int a = 0; a <= A; ++a) {
        if (a * 500 > X) {
            break;
        }

        for (int b = 0; b <= B; ++b) {
            int sum = a * 500 + b * 100;
            if (sum > X) {
                break;
            }

            int rem = X - sum;
            if (rem % 50 != 0) {
                continue;
            }

            int c = rem / 50;
            if (c <= C) {
                ++cnt;
            }
        }
    }

    cout << cnt;
    return 0;
}