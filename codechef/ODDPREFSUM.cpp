#include <bits/stdc++.h>
using namespace std;

void helper() {
    int n;
    cin >> n;
    int ce = 0, co = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) {
            ++ce;
        } else {
            ++co;
        }
    }

    if (n == 1) {
        if (co == 1) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }

        return;
    }

    if (co == 1 && ce == n - 1) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0) {
        helper();
    }

    return 0;
}
