#include <stdio.h>
#include <stdlib.h>

int* nextGreaterElement(int* nums1, int n1, int* nums2, int n2) {
    int* result = (int*)malloc(n1 * sizeof(int));

    for (int i = 0; i < n1; i++) {
        int index = -1;

        
        for (int j = 0; j < n2; j++) {
            if (nums2[j] == nums1[i]) {
                index = j;
                break;
            }
        }

        int nextGreater = -1;
        for (int j = index + 1; j < n2; j++) {
            if (nums2[j] > nums1[i]) {
                nextGreater = nums2[j];
                break;
            }
        }

        result[i] = nextGreater;
    }

    return result;
}

int main() {
    int n1, n2;

    // input size of nums1
    printf("Enter size of nums1: ");
    scanf("%d", &n1);

    int nums1[n1];
    printf("Enter elements of nums1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
    }

    // input size of nums2
    printf("Enter size of nums2: ");
    scanf("%d", &n2);

    int nums2[n2];
    printf("Enter elements of nums2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
    }

    int* result = nextGreaterElement(nums1, n1, nums2, n2);

    // output result
    printf("Next Greater Elements: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", result[i]);
    }

    free(result);
    return 0;
}