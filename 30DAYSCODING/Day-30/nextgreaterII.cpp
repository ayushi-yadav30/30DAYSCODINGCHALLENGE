#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < 2 * n; i++) {
        int num = nums[i % n];

        while (!st.empty() && nums[st.top()] < num) {
            result[st.top()] = num;
            st.pop();
        }

        if (i < n) {
            st.push(i);
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = nextGreaterElements(nums);

    cout << "Next Greater Elements: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}