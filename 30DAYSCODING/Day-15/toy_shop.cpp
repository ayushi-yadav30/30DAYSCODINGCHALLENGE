#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int toys(vector<int>& w) {
    sort(w.begin(), w.end());

    int n = w.size();
    int i = 0, count = 0;

    while(i < n){
        count++;
        int limit = w[i] + 4;

        
        while(i < n && w[i] <= limit){
            i++;
        }
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << toys(arr);
}