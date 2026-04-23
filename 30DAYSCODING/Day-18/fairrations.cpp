#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] % 2 != 0) {
            a[i]++;       
            a[i + 1]++;   
            count += 2;
        }
    }

    
    if (a[n - 1] % 2 != 0) {
        cout << "NO\n";
    } else {
        cout << count << "\n";
    }

return 0;
}