#include <stdio.h>
//  Acumulado de Elementos
int main() {
    int n, i, j, aux, atual, k, count;
    int v[10000];
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (v[i] > v[j]) {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
        aux = 0;
        atual = v[0];
        j = 0;
        for (i = 0; i <= v[n - 1]; i++) {
            k = 0;
            count = 0;
            for (k = 0; k < n; k++) {
                if (v[k] <= i) count++;
                else break;

            }
            printf("(%d) %d\n", i, count);
        }
    }
    return 0;
}
