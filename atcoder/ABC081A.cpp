#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            ++cnt;
        }
    }

    cout << cnt;
    return 0;
}