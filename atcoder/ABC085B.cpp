#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> mochi(n);
    for (int i = 0; i < n; i++) {
        cin >> mochi[i];
    }

    sort(mochi.begin(), mochi.end(), greater<int>());
    mochi.erase(unique(mochi.begin(), mochi.end()),
                mochi.end());  // remove adjacent duplicates
    cout << mochi.size();
    return 0;
}