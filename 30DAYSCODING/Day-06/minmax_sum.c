#include <stdio.h>

void miniMaxSum(long arr[], int n) {
    long sum = 0;
    long min = arr[0], max = arr[0];

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    long min_sum = sum - max;
    long max_sum = sum - min;

    printf(" MINIMUM=%ld MAXIMUM= %ld\n", min_sum, max_sum);
}

int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

     long arr[n];
 printf("Enter elements of array:\n");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    miniMaxSum(arr, n);

    return 0;
}
