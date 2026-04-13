#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {

    
    sort(arr.begin(), arr.end());

    
    int d = arr[1] - arr[0];

    
    for(int i = 2; i < arr.size(); i++){
        if(arr[i] - arr[i-1] != d){
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(canMakeArithmeticProgression(arr)){
        cout << "Yes, can form Arithmetic Progression";
    } else {
        cout << "No, cannot form Arithmetic Progression";
    }

    return 0;
}