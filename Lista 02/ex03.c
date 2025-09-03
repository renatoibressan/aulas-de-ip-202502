#include <stdio.h>

int main() {
    int conta;
    float consumo, valor, fixo;
    char consumidor;
    scanf("%d %f %c", &conta, &consumo, &consumidor);
    if (consumo < 0) {
        return 0;
    }
    switch (consumidor) {
        case 'R':
            valor = 5 + (0.05 * consumo);
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2f\n", valor);
            break;
        case 'C':
            valor = 500 + 0.25 * (consumo - 80);
            if (consumo < 80) {
                fixo = 500;
                printf("CONTA = %d\n", conta);
                printf("VALOR DA CONTA = %.2f\n", fixo);
            } else {
                printf("CONTA = %d\n", conta);
                printf("VALOR DA CONTA = %.2f\n", valor);
            }
            break;
        case 'I':            
            valor = 800 + 0.04 * (consumo - 100);
            if (consumo < 100) {
                fixo = 800;
                printf("CONTA = %d\n", conta);
                printf("VALOR DA CONTA = %.2f\n", fixo);
            } else {
                printf("CONTA = %d\n", conta);
                printf("VALOR DA CONTA = %.2f\n", valor);
            }
            break;
        default:
            return 0;
    }
    return 0;
}