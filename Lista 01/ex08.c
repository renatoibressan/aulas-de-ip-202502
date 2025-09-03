#include <stdio.h>

int main() {
    unsigned long int h, m, s;
    unsigned long int X;

    // printf("Entre com o valor das horas: ");
    scanf("%d", &h);

    // printf("Entre com o valor dos minutos: ");
    scanf("%d", &m);

    // printf("Entre com o valor dos segundos: ");
    scanf("%d", &s);

    // calcula o valor do tempo total em segundos;
    X = (h * 3600) + (m * 60) + s;
    printf("O TEMPO EM SEGUNDOS E = %d\n", X);

    return 0;
}
