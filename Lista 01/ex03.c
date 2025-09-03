#include <stdio.h>

#define pi 3.14159

int main() {
    float r, h;
    float Ac, Al, At;
    float X;

    // printf("Entre com o valor do raio: ");
    scanf("%f", &r);

    // printf("Entre com o valor da altura: ");
    scanf("%f", &h);

    // calcula a área do círculo;
    Ac = pi * r * r;
    // calcula a área da lata;
    Al = 2 * pi * r * h;
    // calcula a área total;
    At = (2 * Ac) + Al;
    // calcula o valor do custo;
    X = At * 100;
    printf("O VALOR DO CUSTO E = %.2f\n", X);

    return 0;
}

