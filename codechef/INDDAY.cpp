#include <bits/stdc++.h>

using namespace std;

int main() {
    int d;
    cin >> d;
    if (d > 15 || d <= 0) {
        cout << -1;
        return 0;
    }

    cout << 15 - d;
    return 0;
}