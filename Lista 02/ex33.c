#include <stdio.h>

int tamanho_seq(int a) {
    int tamanho = 0;
    while (a > 0) {
        a /= 10;
        tamanho++;
    }
    return tamanho;
}

int main() {
    int sequencial, code;
    scanf("%d %d", &sequencial, &code);
    int array[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int auxiliar = sequencial;
    int i = 0;
    int f = 0;
    int d1 = 0;
    int d2 = 0;
    for (i = 0; i <= tamanho_seq(sequencial); i++) {
        array[i] = auxiliar % 10;
        auxiliar /= 10;
    }
    for (i = 9; i > 1; i--) {
        d1 += array[f] * i;
        f++;
    }
    d1 %= 11;
    if (d1 == 10) {
        d1 = 0;
    }
    d2 = ((code / 10) * 7) + ((code % 10) * 8) + (d1 * 9);
    d2 %= 11;
    if (d2 == 10) {
        d2 = 0;
    }
    if (code < 1 || code > 28) {
        printf("CODIGO DA UF INVALIDO!\n");
        return 0;
    } else if (code < 10) {
        printf("%d0%d/%d%d\n", sequencial, code, d1, d2);
    } else {
        printf("%d%d/%d%d\n", sequencial, code, d1, d2);
    }
    return 0;
}