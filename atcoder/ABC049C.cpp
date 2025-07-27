#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    const string words[4] = {"dream", "dreamer", "erase", "eraser"};
    bool matched;
    int pos = s.size();

    while (pos > 0) {
        matched = false;
        for (const string &w : words) {
            if (pos >= w.size() && s.substr(pos - w.size(), w.size()) == w) {
                pos -= w.size();
                matched = true;
                break;
            }
        }
        if (!matched) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}