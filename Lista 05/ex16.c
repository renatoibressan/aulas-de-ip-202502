#include <stdio.h>
// Turismo
int main() {
    int n, d[6][6] = {
        {0, 63, 210, 190, -1, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150, 10, 0, 10, 20},
        {10, 95, 7, 21, 0, 80},
        {190, 2, -1, 41, 80, 0}
    };
    scanf("%d", &n);
    if (n < 1 || n > 100) {
        printf("rota invalida!\n");
        return 0;
    }
    int route[100], i;
    for (i = 0; i < n; i++) {
        scanf("%d", &route[i]);
        if (route[i] < 0 || route[i] > 5) {
            printf("rota invalida!\n");
            return 0;
        }
    }
    int origem, destino;
    int dTotal = 0, valid = 1;
    for (i = 0; i < n - 1; i++) {
        origem = route[i];
        destino = route[i + 1];
        if (d[origem][destino] == -1) {
            valid = 0;
            break;
        }
        dTotal += d[origem][destino];
    }
    if (valid == 1) printf("%d\n", dTotal);
    else printf("rota invalida!\n");
    return 0;
}
