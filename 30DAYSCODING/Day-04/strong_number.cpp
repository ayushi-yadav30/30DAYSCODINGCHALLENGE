#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
       fact=fact*i;
            }
     return fact;
        }
int isStrong(int N) {
     int originalnumber=N,sum=0;
     while(N>0){
            int d=N%10;
            sum=sum+factorial(d);
            N=N/10;
        }
        if(originalnumber==sum)
          return 1;//if number is strong number
        else
          return 0;//if not a strong number
      
    }
    int main(){
        int number;
        cin>>number;
        int Result=isStrong(number);
        cout<<Result;
        return 0;
    }