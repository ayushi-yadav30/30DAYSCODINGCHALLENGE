#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
    return b;
}
 else if(b==0){
    return a;
}
 else {
    return gcd(b,a%b);
}
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int result=gcd(n1,n2);
    cout<<"HCF OF TWO NUMBERS:"<<result;
    return 0;
}

