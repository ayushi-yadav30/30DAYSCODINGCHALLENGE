#include<iostream>
using namespace std;
int digit_counting(int n){
    if(n/10==0){
        return 1;
    }
    else{
        return 1 + digit_counting(n/10);
    }

}
int main(){
    int number;
    cin>>number;
    int d=digit_counting(number);
    cout<<"Result:"<<d;
    return 0;
}