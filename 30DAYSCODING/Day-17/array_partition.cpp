#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end()); 
    
    int s = 0;
    
    
    for (int i = 0; i < nums.size(); i += 2) {
        s += nums[i];
    }
    
    return s;
}

int main() {
    vector<int> nums = {1, 4, 3, 2};
    
    cout << arrayPairSum(nums);
    
    return 0;
}