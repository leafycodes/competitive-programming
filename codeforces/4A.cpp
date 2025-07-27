#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    cout << (k == 2 ? "NO" : k % 2 == 0 ? "YES" : "NO");
    return 0;
}