#include<stdio.h>

void linearsearch(int arr[], int N, int key){
    int found = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] == key){
            printf("Element found at index %d\n", i);
            found = 1;
        }
    }

    if(found == 0){
        printf("Element not found");
    }
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

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    linearsearch(arr, n, key);

    return 0;
}