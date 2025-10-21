#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int v[9], i, j = 0, k = 0, soma = 0, dif = 0, trade = 0;
    for (i = 0; i < t; i++) {
        soma = 0;
        for (j = 0; j < 9; j++) {
            scanf("%d", &v[j]);
            soma += v[j];
        }
        dif = soma - 100;
        for (j = 0; j < 8; j++) {
            for (k = j + 1; k < 9; k++) {
                if (v[j] + v[k] == dif) {
                    v[k] = 0;
                    v[j] = 0;
                }
            }
        }
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 8 - j; k++) {
                if (v[k] > v[k + 1]) {
                    trade = v[k];
                    v[k] = v[k + 1];
                    v[k + 1] = trade;
                }
            }
        }
        for (j = 0; j < 9; j++) {
            if (v[j] != 0) printf("%d\n", v[j]);
        }
    }
    return 0;
}