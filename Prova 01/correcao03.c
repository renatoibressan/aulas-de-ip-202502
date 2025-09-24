#include <stdio.h>

int main() {
    double invest, taxa;
    int anos;
    double taxa_mensal, soma = 0;
    int i, j;
    scanf("%lf %lf %d", &invest, &taxa, &anos);
    taxa_mensal = (taxa / 12.0) / 100.0;
    soma = invest;
    for (i = 1; i <= anos; i++) {
        for (j = 1; j <= 12; j++) {
            soma += invest * taxa_mensal;
            printf("Mes: %d/%d, Valor: %.1lf\n", j, i, soma);
        }
        invest = soma;
    }
    return 0;
}