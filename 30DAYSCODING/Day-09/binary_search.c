#include<stdio.h>
int binary_search(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1;
    while(low<=high){
       int mid=low+(high-low)/2;

        if(nums[mid]==target){
        return mid;
    }
        else if(nums[mid]<target){
        low=mid+1;
        }
        else{
        high=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter element to search: ");
    scanf("%d", &target);

   int search=binary_search(arr, n, target);

    if(search != -1) {
        printf("Element found at index %d", search);
    } else {
        printf("Element not found");
    }

    return 0;
}
