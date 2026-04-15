#include<stdio.h>
int howManyGames(int p, int d, int m, int s){
    int count=0;
    while(s>=p){
        s-=p;
        count++;
         p = (p - d > m) ? p - d : m;
    }
    return count;
}
int main(){
    int p,d,m,s;
    scanf("%d %d %d %d",&p , &d , &m , &s);
    int result=howManyGames( p,  d,  m,  s);
    printf("%d",result);
    return 0;
}