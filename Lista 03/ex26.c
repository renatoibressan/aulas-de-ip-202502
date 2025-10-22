#include <stdio.h>
// Loteria
int main() {
    int v[6], i, n;
    for (i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
        if (v[i] < 1 || v[i] > 60) return 0;
    }
    scanf("%d", &n);
    int w[6], j, k, count = 0;
    int sena = 0, quina = 0, quadra = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < 6; j++) {
            scanf("%d", &w[j]);
            if (w[j] < 1 || w[j] > 60) return 0;
        }
        for (j = 0; j < 6; j++) {
            for (k = 0; k < 6; k++) {
                if (w[j] == v[k]) {
                    count++;
                    break;
                }
            }
        }
        if (count == 6) sena++;
        else if (count == 5) quina++;
        else if (count == 4) quadra++;
    }
    if (sena > 0) printf("Houve %d acertador(es) da sena\n", sena);
    else if (sena == 0) printf("Nao houve acertador para sena\n");
    if (quina > 0) printf("Houve %d acertador(es) da quina\n", quina);
    else if (quina == 0) printf("Nao houve acertador para quina\n");
    if (quadra > 0) printf("Houve %d acertador(es) da quadra\n", quadra);
    else if (quadra == 0) printf("Nao houve acertador para quadra\n");
    return 0;
}
