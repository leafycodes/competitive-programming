#include <iostream>
using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        int dig = num % 10;
        sum += dig;
        num /= 10;
    }

    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int dig = sum_of_digits(i);
        if (a <= dig && dig <= b) {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}