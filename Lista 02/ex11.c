#include <stdio.h>

int main() {
    int n, i;
    unsigned long int f;
    f = 1;
    scanf("%d", &n);
    if (n < 0) {
        return 0;
    } else {
        for (i = 1; i <= n; i++) {
            f *= i;
        }
        printf("%d! = %lu\n", n, f);
    }
    return 0;
}