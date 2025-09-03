#include <stdio.h>

int main() {
    int n, i;
    int m = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("NAO PRIMO\n");
        return 0;
    } else if (n < 0) {
        printf("Numero invalido!\n");
        return 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                m++;
                break;
            }
        }
    }
    if (m == 0) {
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }
    return 0;
}