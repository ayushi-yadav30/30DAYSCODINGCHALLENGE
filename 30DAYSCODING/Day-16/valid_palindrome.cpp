#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {
   
        if (!isalnum(s[i])) {
            i++;
        }
      
        else if (!isalnum(s[j])) {
            j--;
        }
        
        else {
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
    }

    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "True (Valid Palindrome)" << endl;
    } else {
        cout << "False (Not a Palindrome)" << endl;
    }

    return 0;
}