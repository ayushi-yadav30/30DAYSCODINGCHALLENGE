#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {
    int house2 = 0; 
    int house1 = 0; 

    for (int num : nums) {
        int take = house2 + num;
        int skip = house1;

        int curr = max(take, skip);

        house2 = house1;
        house1 = curr;
    }

    return house1;
}


    int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << rob(nums) << endl;

    return 0;
}
