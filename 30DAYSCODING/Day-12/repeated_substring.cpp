#include <iostream>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.length();

    for (int len = 1; len <= n / 2; len++) {
        if (n % len == 0) {
            string sub = s.substr(0, len);
            string formed = "";

            int times = n / len;
            for (int i = 0; i < times; i++) {
                formed += sub;
            }

            if (formed == s)
                return true;
        }
    }
    return false;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (repeatedSubstringPattern(s))
        cout << "True (String can be formed by repeating a substring)" << endl;
    else
        cout << "False (No repeating substring pattern)" << endl;

    return 0;
}