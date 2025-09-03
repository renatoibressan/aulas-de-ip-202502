#include <stdio.h>

int main() {
    int n1, n2, n3, q;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if (n1 < 0 || n1 > 9) {
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    if (n2 < 0 || n2 > 9) {
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    if (n3 < 0 || n3 > 9) {
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    q = n1 * 100 + n2 * 10 + n3;
    printf("%d, %d", q, q * q);
    return 0;
}