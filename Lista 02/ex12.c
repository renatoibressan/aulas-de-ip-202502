#include <stdio.h>

int main() {
    int k, n;
    int ultimo = -999999;
    int count = 0;
    int maior = 0;
    scanf("%d", &k);
    if (k <= 0) {
        return 0;
    }
    while (k--) {
        scanf("%d", &n);
        if (n > ultimo) {
            count++;
        } else {
            count = 1;
        }
        ultimo = n;
        if (count > maior) {
            maior = count;
        }
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", maior);
    return 0;
}