#include<iostream>
using namespace std;
void leftrotate(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++)
        temp[i]=arr[i];

    for(int i=k;i<n;i++)
        arr[i-k]=arr[i];

     for(int i=0;i<k;i++)
      arr[n-k-i]=temp[i];

}

int main(){
     int N;
     cout<<"Enter the size of array:";
    cin>>N;
    int k;
     cout<<"Enter the number of rotation in array:";
    cin>>k;
     int a[N];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<N;i++){
    cin>>a[i];
    }
leftrotate(a,N,k);
 cout<<"["; 
 for(int i=0;i<N;i++){
       cout<<"  "<< a[i];
}
    cout<<" ]";
return 0;
}