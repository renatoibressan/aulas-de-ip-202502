#include <stdio.h>
//  Número perfeito
int main() {
    int n, i;
    int soma = 0;
    int checkup = 0;
    scanf("%d", &n);
    printf("%d = ", n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
            if (checkup == 0) {
                printf("%d", i);
            } else {
                printf(" + %d", i);
            }
            checkup = 1;
        }
    }
    printf(" = %d", soma);
    if (n == soma) {
        printf(" (NUMERO PERFEITO)\n");
    } else {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }
    return 0;
}
