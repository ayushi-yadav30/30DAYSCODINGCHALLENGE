#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 1);

    for (int i = 1; i < rowIndex; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }

    return row;
}

int main() {
    int rowIndex;
    cout << "Enter row index: ";
    cin >> rowIndex;

    vector<int> result = getRow(rowIndex);

    cout << "Pascal Row: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}