#include <iostream>
using namespace std;

string reverseFirstK(string s, int k) {
    int n = s.length();
    
  
    k = min(k, n);

    int i = 0, j = k - 1;

  
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    cout << reverseFirstK(s, k);

    return 0;
}