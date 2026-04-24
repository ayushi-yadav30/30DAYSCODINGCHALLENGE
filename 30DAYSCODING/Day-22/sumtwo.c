#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int hash[MAX];

void twoSum(int arr[], int n, int target) {
    for(int i = 0; i < MAX; i++)
        hash[i] = -1;

    for(int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if(complement >= 0 && complement < MAX && hash[complement] != -1) {
            printf("Indices: %d and %d\n", hash[complement], i);
            return;
        }

        if(arr[i] < MAX)
            hash[arr[i]] = i;
    }

    printf("No solution found\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    twoSum(arr, n, target);

    return 0;
}