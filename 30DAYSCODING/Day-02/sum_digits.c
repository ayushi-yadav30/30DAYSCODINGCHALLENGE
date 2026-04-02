#include<stdio.h>
int repeatedSumOfDigits(int N) {
        if (N < 10)  
            return N;
        
        int sum = 0;
        
        while (N > 0) {
            sum += N % 10;  
            N /= 10;        
        }
        return repeatedSumOfDigits(sum); 
    }
    int main(){
        int num;
        scanf("%d",&num);
        int s=repeatedSumOfDigits(num);
        printf("Result=%d\n",s);
        return 0;
    }