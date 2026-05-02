#include<iostream>
using namespace std;

int good(int N){
    int diff=0;

    while(N>0){
        int Digit=N%10;
        if(Digit==3 || Digit==4 || Digit==7)
        return 0;

        if(Digit==2 || Digit==5 || Digit==6 || Digit==9)
        diff=1;

        N/=10;
    }
    return diff;
}


    int rotatedDigits(int n) {
        int count=0;
        for(int i=0; i<=n; i++){
            if(good(i))
            count++;
        }
        return count;
    }
    int main(){
        int n;
        cout<<"Enter the number:"<<endl;
        cin>>n;

        cout<<"Good Numbers Count:"<<rotatedDigits(n)<<endl;
        return 0;
        

    }