#include<stdio.h>
void reverse(int *arr,int n){
    int start=0,end=n-1,temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("REVERSED ARRAY:\n");
    printf("[ ");
    reverse(arr, n);
    for(int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
   printf(" ]");
    return 0;
}