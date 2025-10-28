#include <stdio.h>

int ehPermutacao(int m[500][500], int n, int * soma) {
    int l, c;
    int checkup[500], p = 0, somaL, somaC;
    *soma = 0;
    for (l = 0; l < n; l++) {
        somaL = 0;
        somaC = 0;
        for (c = 0; c < n; c++) {
            if (m[l][c] != 1) {
                if (m[l][c] != 0) p = 1;
            }
            if (m[c][l] != 1) {
                if (m[c][l] != 0) p = 1;
            }
            somaL += m[l][c];
            somaC += m[c][l];
        }
        *soma +=somaL;
        if (somaL != 1 || somaC != 1) p = 1;
    }
    return p;
}

int main() {
    int n, m[500][500];
    scanf("%d", &n);
    int l, c, p, soma;
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    p = ehPermutacao(m, n, &soma);
    printf("%d\n", n);
    if (p == 0) printf("PERMUTACAO\n");
    else if (p == 1) printf("NAO EH PERMUTACAO\n");
    printf("%d\n", soma);
    return 0;
}