#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int*arr,int n){
int min;//minimum index

    for(int i=0;i<n-1;i++){
         min=i;
     for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min]){
          min=j;
        }
    }
      if(min!=i){
    swap(arr[min],arr[i]);
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
selection_sort(a,N);
 cout<<"["; 
 for(int i=0;i<N;i++){
       cout<<"  "<< a[i];
}
    cout<<" ]";
return 0;
}