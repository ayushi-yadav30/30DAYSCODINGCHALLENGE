#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        long rev=0;int temp=x;
        if(x<0){
            return false;
        }
        while(x!=0 && x>0){
            int d=x%10;
            rev=rev*10+d;
            x=x/10;
        }
        return (rev==temp);
    }
int main(){
    int num;
    cin>>num;
    int p;
    p=isPalindrome(num);//true=1 or false=0
    cout<<"Result:"<<p;
    return 0;
}