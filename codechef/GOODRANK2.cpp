#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 2 << endl;

    for (int i = 1; i <= n; ++i) {
        cout << i << (i == n ? "" : " ");
    }
    cout << endl;

    for (int i = n; i >= 1; --i) {
        cout << i << (i == 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}