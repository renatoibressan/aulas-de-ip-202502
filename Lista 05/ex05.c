#include <stdio.h>
// Ampulheta
int main() {
    int m[6][6];
    int l, c;
    for (l = 0; l < 6; l++) {
        for (c = 0; c < 6; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    int soma = 0;
    int maior = -64;
    for (l = 0; l + 2 < 6; l++) {
        for (c = 0; c + 2 < 6; c++) {
            soma = m[l][c] + m[l][c + 1] + m[l][c + 2] + m[l + 1][c + 1] + m[l + 2][c] + m[l + 2][c + 1] + m[l + 2][c + 2];
            if (soma > maior) maior = soma;
        }
    }
    printf("%d\n", maior);
    return 0;
}
