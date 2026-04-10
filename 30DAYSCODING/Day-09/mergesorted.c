#include<stdio.h>
void merge(int* nums1, int m, int* nums2, int n) {
    int i = m - 1;        // last element of nums1
    int j = n - 1;        // last element of nums2
    int k = m + n - 1;    // last position of nums1

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If nums2 still has elements
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
int main() {
    int m, n;


    printf("Enter number of elements in nums1 (m): ");
    scanf("%d", &m);

    int nums1[100]; 

  
    printf("Enter %d sorted elements of nums1:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

   
    printf("Enter number of elements in nums2 (n): ");
    scanf("%d", &n);

    int nums2[100];

    printf("Enter %d sorted elements of nums2:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

   
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    
    merge(nums1, m, nums2, n);
    printf("Merged array:\n");
     printf("[ ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    } 
        printf(" ] ");

    return 0;
}
