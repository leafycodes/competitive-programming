#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++) {
        cout << bitset<32>(i ^ (i >> 1)).to_string().substr(32 - n) << endl;
    }
    return 0;
}