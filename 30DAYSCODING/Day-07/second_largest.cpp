#include<iostream>
using namespace std;
int secondlargest(int *arr,int n){
    // Initialize max and secondmax to -1 as a sentinel value smaller than any expected array element (assuming non-negative numbers)
    int max=-1;
    int secondmax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondmax  &&  arr[i]!=max)
        secondmax=arr[i];
    }

    return secondmax;

}
int main(){
    int N;
    cout<<"Enter the size of array:"<<endl;
    cin>>N;
    int a[N];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<N;i++){
    cin>>a[i];
}
int r=secondlargest(a,N);
cout<<"The Second Largest Element is:"<<r;
return 0;
}