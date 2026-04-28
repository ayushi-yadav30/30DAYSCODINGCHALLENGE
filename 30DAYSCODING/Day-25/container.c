#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxArea(int height[], int n) {
    int left = 0, right = n - 1;
    int max_water = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        max_water = max(max_water, area);

        
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return max_water;
}

int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);

    printf("Max Water: %d\n", maxArea(height, n));

    return 0;
}