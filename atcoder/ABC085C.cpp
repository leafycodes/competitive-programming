#include <iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            int k = n - i - j;
            if (i * 10000 + j * 5000 + k * 1000 == y) {
                cout << i << " " << j << " " << k;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1;
    return 0;
}