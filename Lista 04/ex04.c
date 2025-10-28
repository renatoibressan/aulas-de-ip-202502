#include <stdio.h>
// Número perfeito
int somaDivisores(int n) {
    int i;
    int soma = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma;
}

int main() {
    int n, i, checkup = 0;
    scanf("%d", &n);
    if (n <= 1) return 0;
    printf("%d = ", n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            somaDivisores(n);
            if (checkup == 0) printf("%d", i);
            else printf(" + %d", i);
            checkup = 1;
        }
    }
    printf(" = %d", somaDivisores(n));
    if (n == somaDivisores(n)) printf(" (NUMERO PERFEITO)\n");
    else printf(" (NUMERO NAO E PERFEITO)\n");
    return 0;
}
