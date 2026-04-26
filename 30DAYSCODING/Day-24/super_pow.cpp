#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1337;


int modPow(int a, int b) {
    int result = 1;
    a %= MOD;

    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % MOD;

        a = (a * a) % MOD;
        b /= 2;
    }

    return result;
}


int superPow(int a, vector<int>& b) {
    int result = 1;

    for (int digit : b) {
        result = modPow(result, 10);
        result = (result * modPow(a, digit)) % MOD;
    }

    return result;
}

int main() {
    int a, n;

    cout << "Enter base (a): ";
    cin >> a;

    cout << "Enter number of digits in exponent: ";
    cin >> n;

    vector<int> b(n);
    cout << "Enter digits of exponent: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = superPow(a, b);

    cout << "Result: " << result << endl;

    return 0;
}