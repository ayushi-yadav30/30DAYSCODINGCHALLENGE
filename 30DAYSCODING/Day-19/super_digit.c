#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    if (n == 0) {
        printf("Super Digit: 0\n");
    } else {
        int result = n % 9;
        printf("Super Digit: %d\n", (result == 0) ? 9 : result);
    }
    return 0;
}


