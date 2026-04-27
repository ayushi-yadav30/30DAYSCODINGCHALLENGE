
#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    int arr1[n];

    cout << "Enter elements of first sorted array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
    int arr2[m];

    cout << "Enter elements of second sorted array:\n";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr3[n + m];  
    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }


    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    while(j < m) {
        arr3[k++] = arr2[j++];
    }

    cout << "Merged sorted array:\n";
    for(int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}