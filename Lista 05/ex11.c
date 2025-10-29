#include <stdio.h>

int main() {
    int l, c;
    scanf("%d %d", &l, &c);
    if (l < 2 || l > 10 || c < 2 || c > 10) {
        printf("dimensao invalida\n");
        return 0;
    }
    int m[l][c], i, j;
    int count[1001] = {0};
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            count[m[i][j]]++;
        }
    }
    int valor, unicos = 0;
    int elementos[1000];
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            valor = m[i][j];
            if (count[valor] == 1) elementos[unicos++] = valor;
        }
    }
    if (unicos == 0) printf("sem elementos unicos\n");
    else {
        for (i = 0; i < unicos; i++) {
            if (i > 0) printf(",");
            printf("%d", elementos[i]);
        }
        printf("\n");
    }
    return 0;
}