#include <iostream>
using namespace std;
int digit_counting(int x) {
    if (x / 10 == 0)
        return 1;
    else
        return 1 + digit_counting(x / 10);
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrongNumber(int n) {
    int sum = 0;
    int temp = n;
    int c = digit_counting(n);

    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, c);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int a;
    cout << "Enter number: ";
    cin >> a;

    bool r = armstrongNumber(a);
    cout << boolalpha << "Result: " << r;

    return 0;
}