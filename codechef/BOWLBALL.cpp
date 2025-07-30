#include <bits/stdc++.h>
using namespace std;

void helper() {
    int n, x, y, cnt = 0;
    cin >> n >> x >> y;
    while (n-- > 0) {
        int temp;
        cin >> temp;
        if (x <= temp && temp <= y) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0) {
        helper();
    }
}
