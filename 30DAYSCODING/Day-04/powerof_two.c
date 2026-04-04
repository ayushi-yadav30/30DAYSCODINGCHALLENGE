#include <stdio.h>
int isPowerOfTwo(int n) {
    return (n > 0) && !(n & (n - 1));
}

int main() {
    int N;
    scanf("%d",&N);

    if(isPowerOfTwo(N))
        printf("Yes");
    else
        printf("No");

    return 0;
}