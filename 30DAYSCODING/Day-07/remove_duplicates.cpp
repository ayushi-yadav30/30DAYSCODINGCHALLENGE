#include<iostream>
using namespace std;
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0){
        return 0;
    }
    int i=0;
     for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1; 
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

 int k = removeDuplicates(a, N);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates:" << endl;

    for(int i = 0; i < k; i++){
        cout << a[i] << " ";
    }
    return 0;
}