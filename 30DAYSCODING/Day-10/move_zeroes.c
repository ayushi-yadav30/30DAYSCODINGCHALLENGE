#include<stdio.h>
void movezeroes_end(int * arr,int n){
    int i,j=0;
    for(i=0;i<n;i++){
        if(arr[i]!=0)
        arr[j++]=arr[i];
    }

    while(j<n){
        arr[j++]=0;
    }
}
int main(){
    int N;
    printf("Enter the size of array:\n");
 scanf("%d",&N);

 printf("Enter the elements in array:\n");

 int arr[N];

 for(int i=0;i<N;i++){

 scanf("%d",&arr[i]);
 }

 movezeroes_end(arr,N);

      printf("[ ");

    for (int i = 0; i < N; i++) {

        printf("%d ", arr[i]);

    } 
        printf(" ] ");

        return 0;

}