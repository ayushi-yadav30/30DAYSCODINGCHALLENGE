#include <iostream>
using namespace std;

int next_one(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d*d;
        n/=10;
    }
    return sum;
}

    bool isHappy(int n) {
        int p1=n;
        int p2=next_one(n);

        while(p2!= 1 && p1!=p2){
            p1=next_one(p1);
            p2=next_one(next_one(p2));
        }
        return p2==1;
    }
    int main(){
        int n;
        cin>>n;
        cout<<isHappy(n);//1 is for true and 0 is for false
        return 0;
    }