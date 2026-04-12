#include<iostream>
 #include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
      int maxSum=nums[0]; int currentSum=0;
      for(int i=0; i<nums.size(); i++){
        if(currentSum<0)
            currentSum=0;
        
        currentSum+=nums[i];
        maxSum=max(maxSum,currentSum);
      }
return maxSum;
    }
    int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
}