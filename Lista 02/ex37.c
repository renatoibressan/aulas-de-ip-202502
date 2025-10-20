#include <stdio.h>
// Decomposição em fatores primos
int main() {
    int n;
    int checkup = 0;
    scanf("%d", &n);
    while (n <= 1) {
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    }
    printf("%d = ", n);
    int i;
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            if (checkup == 0) {
                printf("%d", i);
                n /= i;
                i--;
                checkup = 1;
            } else {
                printf(" x %d", i);
                n /= i;
                i--;
                checkup = 1;
            }
        }
    }
    printf("\n");
    return 0;
}
