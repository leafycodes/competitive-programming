#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool opr = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if ((arr[i] & 1) != 0) {
            opr = false;
        }
    }

    int cnt = 0;
    while (opr) {
        for (int i = 0; i < n; i++) {
            arr[i] >>= 1;
            if ((arr[i] & 1) != 0) {
                opr = false;
            }
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}