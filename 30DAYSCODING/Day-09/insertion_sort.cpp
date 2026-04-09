#include<iostream>
using namespace std;

void insertion_Sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Optimization
        if(arr[j] <= key) continue;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
insertion_Sort(a,N);
 cout<<"["; 
 for(int i=0;i<N;i++){
       cout<<"  "<< a[i];
}
    cout<<" ]";
return 0;
}