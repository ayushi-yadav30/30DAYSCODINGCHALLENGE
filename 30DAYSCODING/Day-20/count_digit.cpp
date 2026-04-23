#include<iostream>
using namespace std;
int countDigitOne(int n){
    long long count=0;

    for(long long p=0; p<=n; p*=10){
long long last=n/(p*10);
            long long middle=(n/p)%10;
            long long first=n%p;

            if(middle==0){
                count+=last*p;
                }
                else if(middle==1){
                    count+= last*p + first + 1; 
                }
                else{
                    count+=(last+1) * p;
                }
                            
        }
        return count;

    
}
int main(){
    long long N;
    cout<<"Enter the number:"<<endl;
    cin>>N;
    
    cout<<"Count of '1' :"<<countDigitOne(N);
    return 0;


}