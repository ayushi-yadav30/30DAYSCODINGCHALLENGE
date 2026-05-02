#include <iostream>
#include <vector>
using namespace std;

int trapRainWater(vector<vector<int>>& height) {
    int m = height.size();
    int n = height[0].size();
    int water = 0;

    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {

            int leftMax = 0, rightMax = 0, upMax = 0, downMax = 0;

            // left
            for (int k = 0; k <= j; k++)
                leftMax = max(leftMax, height[i][k]);

            // right
            for (int k = j; k < n; k++)
                rightMax = max(rightMax, height[i][k]);

            // up
            for (int k = 0; k <= i; k++)
                upMax = max(upMax, height[k][j]);

            // down
            for (int k = i; k < m; k++)
                downMax = max(downMax, height[k][j]);

            int minHeight = min(min(leftMax, rightMax), min(upMax, downMax));

            if (minHeight > height[i][j]) {
                water += minHeight - height[i][j];
            }
        }
    }

    return water;
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> height(m, vector<int>(n));

    cout << "Enter matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> height[i][j];

    cout << "Trapped Water: " << trapRainWater(height);

    return 0;
}