#include<iostream>
using namespace std;
int main(){
    int n=1;
    int i,j;
    for(i=0;i<4;i++){
        for(j=i+1;j>0;j--){
            cout<<n<<" ";
            n++;
        }
cout<<endl;
    }
    return 0;
}