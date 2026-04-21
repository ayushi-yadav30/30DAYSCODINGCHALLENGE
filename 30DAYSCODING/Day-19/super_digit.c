<<<<<<< HEAD
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
=======
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
>>>>>>> f2b6bca6b793a238bc096a552986d002e0848071
