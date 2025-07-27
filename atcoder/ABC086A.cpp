#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << (((a * b) & 1) == 0 ? "Even" : "Odd");
    return 0;
}