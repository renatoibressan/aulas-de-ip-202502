#include <stdio.h>
// Matriz bissimétrica
int simetrica(int n, int m[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (m[i][j] != m[j][i]) return 1;
        }
    }
    return 0;
}

int centrosimetrica(int n, int m[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (m[i][j] != m[n - 1 - i][n - 1 - j]) return 1;
        }
    }
    return 0;
}

int bissimetrica(int n, int m[n][n]) {
    return simetrica(n, m) + centrosimetrica(n, m);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("dimensao invalida\n");
        return 0;
    }
    int m[n][n], l, c;
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    if (bissimetrica(n, m) > 0) printf("nao bissimetrica\n");
    else if (bissimetrica(n, m) == 0) printf("bissimetrica\n");
    return 0;
}
