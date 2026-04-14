#include <iostream>
using namespace std;

bool divisorGame(int n) {
    
    return n % 2 == 0;//the girl will win if n is even
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (divisorGame(n)) {
        cout << "Alice wins the game" << endl;
    } else {
        cout << "Bob wins the game" << endl;
    }

    return 0;
}