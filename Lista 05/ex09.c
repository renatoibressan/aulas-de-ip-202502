#include <stdio.h>
#define N 100

int traco(int m[100][100], int n) {
    int i, v[N] = {0}, soma = 0;
    for (i = 0; i < n; i++) {
        v[i] = m[i][i];
        soma += v[i];
    }
    return soma;
}

int main() {
    int n, m[100][100];
    scanf("%d", &n);
    int l, c;
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    int dp = traco(m, n);
    int x[100][100];
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            x[l][c] = m[l][c] * dp;
        }
    }
    int transposta[100][100];
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            transposta[c][l] = m[l][c];
        }
    }
    int soma[100][100];
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            soma[l][c] = x[l][c] + transposta[l][c];
            printf("%d ", soma[l][c]);
        }
        printf("\n");
    }
    return 0;
}