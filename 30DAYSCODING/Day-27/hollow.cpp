#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int totalRows = 2 * n - 1;

    for(int i = 1; i <= totalRows; i++) 
    {
        int level = (i <= n) ? i : (2*n - i);


        cout << string(n - level, ' ');

        
        for(int j = 1; j <= 2*level - 1; j++) {

            if(level == 1 || level == n || j == 1 || j == 2*level - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << "\n";
    }

    return 0;
}