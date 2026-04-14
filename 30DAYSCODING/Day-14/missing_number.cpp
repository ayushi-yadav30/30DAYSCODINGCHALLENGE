#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    long long expectedSum = (long long)n * (n + 1) / 2;


    long long actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    vector<int> nums(n);

    cout << "Enter " << n << " distinct numbers from range [0 to " << n << "]:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);

    cout << "Missing number is: " << result << endl;

    return 0;
}