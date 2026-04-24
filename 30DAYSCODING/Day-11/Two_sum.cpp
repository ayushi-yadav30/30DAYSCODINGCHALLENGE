#include<iostream>
#include<vector>
using namespace std;
vector<int>twoSum(vector<int>& nums,int target){

        int n = nums.size();
int i,j;
    for ( i = 0; i < n; i++) {
        for ( j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; 
            }
        }
    }
    return {}; 
}
    
int main() {
    int n;
     cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
 cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
        int target;
cout<<"Enter the target sum: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1];
    } else {
        cout << "No solution found";
    }

    return 0;
}
