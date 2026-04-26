#include <stdio.h>

int main() {
    int n = 4;

    for (int k = 0; k < n * n; k++) {
        int i = k / n;
        int j;

        if (i % 2 == 0)
            j = k % n;
        else
            j = n - 1 - (k % n);

        printf("%2d ", k + 1);

      
        if ((k + 1) % n == 0)
            printf("\n");
    }

    return 0;
}