#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, less<int>> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push(temp);
    }

    int turn = 0;  // 0 for a ice, 1 for bob
    int res = 0;
    while (!q.empty()) {
        if (turn == 0) {
            res += q.top();
        } else {
            res -= q.top();
        }

        turn ^= 1;
        q.pop();
    }

    cout << res;
    return 0;
}