#include<stdio.h>
#include<stdbool.h>
bool isSorted(int arr[],int N){
    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[i+1])
        return false;
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(isSorted(arr, n))
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

}