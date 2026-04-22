#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_water = 0;

    while (left < right) {
        int width = right - left;
        int ht = min(height[left], height[right]);
        int area = width * ht;

        max_water = max(max_water, area);

       
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return max_water;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = maxArea(height);
    cout << "Maximum water that can be stored: " << result << endl;


}
