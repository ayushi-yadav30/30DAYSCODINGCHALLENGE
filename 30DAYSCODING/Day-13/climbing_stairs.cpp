#include<iostream>
using namespace std;
 int climbStairs(int n) {
        if(n<=2)
        return n;
   int step1=2,step2=1;

   for(int i=3;i<=n;i++){
    int initial=step1+step2;
    step2=step1;
    step1=initial;
   }
   return step1;

    }

    int main(){
        int N;
        cout<<"Enter the steps:"<<endl;
       cin>>N;
     int ans=climbStairs(N);
     cout<<"No of ways to climb:"<<ans<<endl;

    }
     

    