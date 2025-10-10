#include <stdio.h>

unsigned long int fat(unsigned int n) {
    if (n <= 1) return 1;
    return n * fat(n - 1);
}

int main() {
    unsigned int n;
    scanf("%d", &n);
    printf("%ld! = %ld\n", n, fat(n));
    return 0;
}