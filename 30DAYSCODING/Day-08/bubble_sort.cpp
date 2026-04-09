#include<iostream>
#include<algorithm>
using namespace std;

void bubble_sort(int*arr,int n){
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){

           swap(arr[j],arr[j+1]);
        
        }
    }
    }
}
int main(){
     int N;
     cout<<"Enter the size of array:";
    cin>>N;
     int a[N];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<N;i++){
    cin>>a[i];
}
bubble_sort(a,N);
 cout<<"["; 
 for(int i=0;i<N;i++){
       cout<<"  "<< a[i];
}
    cout<<" ]";
return 0;
}