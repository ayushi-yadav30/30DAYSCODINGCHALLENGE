#include<iostream>
using namespace std;
void pattern(int n){
 int i,j;
    for(i=1;i<n;i++){
        for(j=1;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    pattern(6);
}